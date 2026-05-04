# Mad Libs Project

## Goal

Create an interactive Mad Libs game. Collect adjectives, nouns, verbs from the user and create a funny story.

## Concepts Used

- Multiple string inputs with `fgets()`
- String manipulation (removing newlines)
- `printf()` with multiple `%s` placeholders
- Functions for code reuse

## How It Works

1. Ask user for adjectives, nouns, and verbs
2. Store them in separate `char` arrays
3. Use them in a predefined story template with `printf()`
4. Display the silly story

## Compile & Run

```bash
gcc -o mad_libs mad_libs.c
./mad_libs
```
