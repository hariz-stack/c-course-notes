# Introduction to C

## What C is Good For

- Systems programming and embedded work
- Performance-sensitive code
- Learning memory, pointers, and how programs run

## Minimal C Program

Every C program needs a `main()` function - this is where execution starts.

```c
#include <stdio.h>

int main(void) {
	printf("Hello, world!\n");
	return 0;
}
```

## Key Concepts

- `#include <stdio.h>` - Standard Input/Output library
- `int main(void)` - Entry point of the program
- `printf()` - Print formatted output
- `return 0;` - Exit with success status
- `\n` - Newline character
