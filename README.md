# cp-setup

Competitive programming in Neovim. competitest.nvim compiles and runs, so there
is no build system and no runner script.

## Solve a problem

1. `nvim .` in this folder.
2. `<leader>cp` — Neovim starts listening on port 27121.
3. Click the green **+** (Competitive Companion) on the problem page.
4. Neovim creates `<Problem>.cpp` with every sample testcase attached.
5. Write the solution, then `<leader>cr` to compile and run them all.

`<leader>ca` adds a testcase by hand, `<leader>ce` edits one, `<leader>cc`
pulls a whole contest.

Compiled with `g++ -std=c++23 -O2 -Wall`, matching Codeforces GNU G++23. The
flags live in `~/Github/dotfiles/.config/nvim/init.lua`.

`yo.cpp` is the scratch file and the template new problems start from. Do not
put `freopen` in it: competitest feeds the testcase through stdin, so a
`freopen("input.txt", ...)` would read a stale file and ignore the testcase.

`books/` is reference material, unrelated to the above.
