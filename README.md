# cp-setup

Competitive programming in Neovim. The runner is `lua/config/cp.lua` in the
dotfiles repository — no plugin, no build system, no shell script.

Full key reference: `~/Github/dotfiles/.config/nvim/SHORTCUTS.md`.

## Solve a problem

1. `nvim yo.cpp` in this folder.
2. `<leader>rt` — paste `template.cpp` into the buffer.
3. `<leader>rl` — three-pane layout:

```
+----------------+----------------+
|                |   input.txt    |   <- paste the sample here, then :w
|    yo.cpp      +----------------+
|                |   output.txt   |   <- the answer appears here
+----------------+----------------+
```

4. Write the solution.
5. `<C-h>` back to the source pane, then `<leader>rr` to compile and run.

`<leader>ri` and `<leader>ro` open `input.txt` or `output.txt` on their own.

`<leader>rr` compiles the **current buffer**, so run it from the source pane.
From the `input.txt` pane it would run g++ on `input.txt`.

## What the runner does

Compiled with `g++ -std=c++23 -O2 -Wall -DLOCAL`, matching Codeforces GNU G++23.
The flags live in `~/Github/dotfiles/.config/nvim/lua/config/cp.lua`.

`-DLOCAL` switches the `dbg()` macro on. The judge never passes that flag, so
the debug prints compile to nothing there and cost no time.

Everything lands in `output.txt`:

```
stdout ---------------> the top of the file
stderr, i.e. dbg() ---> under "--- stderr (dbg) ---"
a compile error ------> under "COMPILE ERROR"
```

So one window always answers "what happened". The file reloads in place; there
is no need to close and reopen it.

`input.txt` and `output.txt` are created next to the file being edited, not at
the repository root. A problem in `Codeforces/2000/` gets its own pair, so
nothing is shared by accident. Only the root pair is gitignored.

Do not put `freopen` in a solution. The runner feeds `input.txt` through stdin,
and a `freopen("input.txt", ...)` on top of that reads the file twice over.

## Files

| Path | What |
|---|---|
| `template.cpp` | What new problems start from |
| `yo.cpp` | The scratch file |
| `input.txt`, `output.txt` | Scratch pair for the root, both gitignored |
| `problem list/` | Tracked problem lists |
| `books/` | Reference material, unrelated to the above |
