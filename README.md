# cp-setup

Competitive programming in Neovim. No plugin, no build system. Neovim loads the
template; the shell compiles and runs.

Full key reference: `~/Github/dotfiles/.config/nvim/SHORTCUTS.md`.

## Solve a problem

1. `nvim yo.cpp` in this folder.
2. `<leader>rt` (or `:CpTemplate`) — paste `template.cpp` into the buffer.
3. Write the solution. `:w`.
4. Put the sample input in `input.txt`.
5. In a shell, `cy` to compile, then `./yo < input.txt`.

`cy` is an alias in `~/.zshrc`:

```sh
g++ -std=c++23 -O2 -Wall -DLOCAL ~/Github/cp-setup/yo.cpp -o yo
```

Those flags match Codeforces GNU G++23. For any file other than `yo.cpp`, type
the command out:

```sh
g++ -std=c++23 -O2 -Wall -DLOCAL A.cpp -o A && ./A < input.txt
```

## -DLOCAL and dbg()

`template.cpp` defines `dbg()` inside `#ifdef LOCAL`. With `-DLOCAL` it prints
to stderr. Without the flag it expands to nothing, so **every `dbg()` call
vanishes silently** — no error, no output. The judge never passes the flag, so
the debug prints cost nothing there.

`dbg()` writes to stderr, not stdout, so it never mixes into the answer:

```sh
./yo < input.txt            # stdout and stderr both on screen
./yo < input.txt > out.txt  # answer in out.txt, dbg() still on screen
```

Do not put `freopen` in a solution. Feed the file through stdin with `<`.

## Editor diagnostics

`clangd` is the language server; `g++` is the compiler. They are different
programs and both are used. `clangd` needs the flags for each file:

- **This folder** — `.clangd` supplies `-std=c++23 -DLOCAL -Wall`. Without it
  `dbg()` shows as dead code.
- **A CMake project** — `compile_commands.json` wins over `.clangd`, so
  configure with `-DCMAKE_EXPORT_COMPILE_COMMANDS=ON` and nothing else is
  needed.

## Files

| Path | What |
|---|---|
| `template.cpp` | What new problems start from |
| `yo.cpp` | The scratch file, gitignored |
| `input.txt` | Sample input you create as needed, gitignored at the root |
| `.clangd` | Flags for the language server |
| `problem list/` | Tracked problem lists. Start at `problem list/order.md` |
| `books/` | Reference material, unrelated to the above |
