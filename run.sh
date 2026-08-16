#!/bin/bash

# Exit immediately if a command exits with a non-zero status
set -e

# Usage helper
if [ -z "$1" ]; then
    echo "Usage: ./run.sh <filename>"
    echo "Example: ./run.sh yo.cpp  (or ./run.sh yo)"
    exit 1
fi

# Get base name without directory and extension
FILENAME=$(basename "$1")
TARGET="${FILENAME%.cpp}"

# Ensure the source file exists in the workspace root
if [ ! -f "$TARGET.cpp" ]; then
    echo "Error: Source file $TARGET.cpp not found in the current directory."
    exit 1
fi

# Ensure input.txt and output.txt exist in the root directory
touch input.txt output.txt

mkdir -p build

# Prefer cmake when available; otherwise compile directly with g++
if command -v cmake >/dev/null 2>&1; then
    cd build
    cmake .. > /dev/null
    make "$TARGET"
    cd ..
else
    echo "cmake not found; compiling with g++..."
    g++ -std=c++17 -O2 -Wall -Wextra "$TARGET.cpp" -o "build/$TARGET"
fi

echo -e "\n================ Running $TARGET ================"
# Run the executable and measure time
START_TIME=$(date +%s.%N)

# Disable "set -e" temporarily so we can capture the exit code of the target program
set +e
./build/"$TARGET"
EXIT_CODE=$?
set -e

END_TIME=$(date +%s.%N)

# Calculate duration using awk (portable across environments)
DURATION=$(awk "BEGIN {print $END_TIME - $START_TIME}")

echo "================================================="
echo "Exit Code: $EXIT_CODE"
printf "Execution Time: %.3f seconds\n" "$DURATION"

# Display output preview
if [ -s output.txt ]; then
    echo -e "\n--- Output Preview (First 20 lines of output.txt) ---"
    head -n 20 output.txt

    # If the output is long, let the user know
    LINE_COUNT=$(wc -l < output.txt)
    if [ "$LINE_COUNT" -gt 20 ]; then
        echo "... ($((LINE_COUNT - 20)) more lines in output.txt)"
    fi
else
    echo -e "\n(output.txt is empty)"
fi
