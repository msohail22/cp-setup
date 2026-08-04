# Competitive Programming Setup Instructions

Here is how you can compile and run your code:

## Option 1: Using the Runner Script (Easiest)
This automatically configures CMake, compiles, runs, measures execution time, and previews the output:
```bash
./run.sh yo
```

---

## Option 2: Running with CMake Manually
If you want to run the CMake commands yourself step-by-step:
```bash
# 1. Go to the build folder and compile
mkdir -p build && cd build
cmake ..
make yo

# 2. Go back to root and run the binary
cd ..
./build/yo
```

---

## Option 3: Direct Compilation (No CMake)
If you want to compile a single file directly using `g++` without using CMake:
```bash
# 1. Compile
g++ -O2 -Wall yo.cpp -o yo

# 2. Run
./yo
```
