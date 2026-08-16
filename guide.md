# Competitive Programming Setup Guide

How to use this repo with Neovim: 3-pane layout, `input.txt` / `output.txt`, and run without leaving the editor.

---

## Quick start

```bash
cd ~/Github/cp-setup
nvim yo.cpp
```

Then in Neovim:

1. **`<leader>rl`** — open the 3-pane layout  
2. Edit `yo.cpp`, paste sample input into `input.txt`  
3. **`<leader>rr`** — save, compile, run, reload `output.txt`

In LazyVim, `<leader>` is usually **Space**, so:

- `Space` `r` `l` → layout  
- `Space` `r` `r` → run  

---

## Pane layout

```
┌─────────────┬─────────────┐
│             │  input.txt  │
│   yo.cpp    ├─────────────┤
│             │ output.txt  │
└─────────────┴─────────────┘
```

- Left: your solution (`.cpp`)  
- Top right: sample / custom input  
- Bottom right: program output  

**Move between panes:** `Ctrl-w` then `h` / `j` / `k` / `l`  
**Resize:** `Ctrl-w` then `>` / `<` / `+` / `-`

---

## Neovim keymaps

Defined in `~/.config/nvim/lua/config/keymaps.lua`.

| Shortcut     | Action |
|--------------|--------|
| `<leader>rl` | Close other windows and open code \| input / output |
| `<leader>rr` | Save all buffers, run `./run.sh <file>`, reload `output.txt` |

`<leader>rr` uses the current `.cpp` if focused; otherwise the first visible `.cpp` window; otherwise `yo`.

### Load / reload keymaps

After editing keymaps, either **restart Neovim**, or run inside Neovim:

```vim
:source ~/.config/nvim/lua/config/keymaps.lua
```

---

## How input / output works

In `yo.cpp` (local only; skipped on online judges):

```cpp
#ifndef ONLINE_JUDGE
    (void)!freopen("input.txt", "r", stdin);
    (void)!freopen("output.txt", "w", stdout);
#endif
```

- Locally: `cin` ← `input.txt`, `cout` → `output.txt`  
- On Codeforces / AtCoder: normal stdin / stdout  

Always run from the **repo root** so those paths resolve.

---

## Runner script

From the repo root (terminal or Neovim):

```bash
./run.sh yo          # or: ./run.sh yo.cpp
```

This configures CMake, builds the target, runs it, prints timing, and previews `output.txt`.

### Manual alternatives

**Direct g++ (C++20):**

```bash
g++ -std=c++20 -O2 -Wall yo.cpp -o yo
./yo
```

**CMake by hand:**

```bash
mkdir -p build && cd build
cmake ..
make yo
cd ..
./build/yo
```

---

## Everyday loop

1. Open repo → `nvim yo.cpp`  
2. `<leader>rl` for layout  
3. Write solution in the left pane  
4. Paste testcase into `input.txt`  
5. `<leader>rr`  
6. Read result in `output.txt`  

No need to leave Neovim.

---

## Notes

- CMake standard is set in `CMakeLists.txt` (`CMAKE_CXX_STANDARD`).  
- `output.txt` is gitignored; `input.txt` may still be tracked depending on `.gitignore`.  
- New `.cpp` files in the repo root are picked up automatically by CMake / `./run.sh`.  
