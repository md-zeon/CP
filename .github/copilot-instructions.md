The repository contains short, single-file C++ solutions for competitive programming problems. The following instructions are tailored for an AI coding agent (Copilot-style) to be productive quickly.

Repository overview
- Language: C++ (plain, typically single-file solutions using <bits/stdc++.h>). Example files: `Tactical_Conversion.cpp`, `Small_GCD_Sort.cpp`, `Divisible_Duel.cpp`, `Bitcoin_Market.cpp`.
- Structure: Flat workspace with independent problem-solution files. There is no build system or tests provided.
- Runtime expectations: Solutions read from stdin and write to stdout, often with multiple test cases and tight time constraints. Fast I/O patterns (ios::sync_with_stdio(false); cin.tie(nullptr);) are used in examples.

What the agent should assume
- Each .cpp is a standalone program intended to be compiled and run separately (g++ -O2 -std=gnu++17 <file>.cpp).
- Typical input shape: first integer t for test cases, then per-test-case data. Look at `main()` in each file for exact parsing.
- No external libraries or package managers are used. Avoid adding heavy dependencies.

Common patterns and conventions in this repo
- Single-file solutions per problem: keep changes minimal and confined to the same file unless adding tests or helper scripts.
- Use of <bits/stdc++.h> and namespace std.
- Fast I/O at program start: preserve it when editing.
- Simple local state: code often uses vectors, strings, recursion and backtracking for small N. Example: `convertToZeroPossible` in `Tactical_Conversion.cpp` uses recursion and modifies a `vector<bool>&` in-place — be careful to restore state after recursion.
- Return-value and error handling: many functions implicitly assume valid inputs from contest judge; avoid adding heavy defensive checks unless debugging a specific failing case.

Specific codebase notes (actionable examples)
- `Tactical_Conversion.cpp`: a recursive function `convertToZeroPossible(string S, vector<bool>& IdxOne)` returns whether a string can be reduced to all zeros by flipping isolated 1s. The function currently lacks a final return; ensure boolean return paths are complete and consider guarding recursion depth if N can be large.
- `Small_GCD_Sort.cpp`, `Divisible_Duel.cpp`, `Bitcoin_Market.cpp`: follow the existing style (single-file, small helper functions inside the same file). When refactoring, keep the public interface (input/output format) intact.

How to edit safely
- Preserve the single-file nature and fast I/O lines.
- When introducing helper functions, place them above `main()` and keep them static/unnamed in file scope.
- Avoid changes that require project-wide build or CI updates; propose them separately.

Build and run (how to test locally)
- Compile a single file:
  g++ -O2 -std=gnu++17 Tactical_Conversion.cpp -o Tactical_Conversion
- Run with input from file or heredoc: `./Tactical_Conversion < input.txt`.
- If adding quick tests, create a `tests/` directory with a matching input/output pair and a short shell script to compile-and-run.

Edge cases and cautions
- Many solutions assume N is small or within contest constraints; do not change algorithms to exponential approaches unless replacing a buggy exponential with a correct polynomial alternative.
- Be conservative with recursion: C++ recursion depth may be limited for large N; prefer iterative or explicit stack conversions if N can exceed a few thousand.

When to ask the user
- If a change would introduce multiple files, CI, or a new test harness, ask explicitly before proceeding.
- If input constraints (e.g., max N, time/memory limits) are not deducible from the code, request them before large refactors.

Files to inspect first for context
- `Tactical_Conversion.cpp` — example of recursive backtracking and small bug (missing return).
- `Small_GCD_Sort.cpp`, `Divisible_Duel.cpp`, `Bitcoin_Market.cpp` — examples of single-file contest solutions and IO parsing.

If you update code
- Run a quick compile check for the edited file.
- If adding tests, include a minimal test and the commands used to run it.

Contact
- If anything about judge constraints, CI, or preferred compile flags is missing, ask the repository owner.

