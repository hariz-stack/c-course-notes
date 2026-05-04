# File I/O

## Writing to Files

Use `fopen()` to open a file, `fprintf()` to write, and `fclose()` to close.

```c
FILE *f = fopen("output.txt", "w");
if (!f) return 1;  // check for error

fprintf(f, "Hello file!\n");
fclose(f);
```

### File Modes

- `"r"` - Read (file must exist)
- `"w"` - Write (creates/overwrites file)
- `"a"` - Append (creates/adds to file)
- `"r+"` - Read and write

## Reading from Files

Use `fgets()` to read lines, or `fscanf()` for formatted input.

```c
FILE *f = fopen("output.txt", "r");
if (!f) return 1;

char line[256];
while (fgets(line, sizeof(line), f)) {
	printf("%s", line);
}
fclose(f);
```

## Important Rules

1. Always check if `fopen()` succeeded (not NULL)
2. Always `fclose()` when done
3. Use appropriate mode (`"r"`, `"w"`, `"a"`)
4. For strings with spaces, use `fgets()` instead of `scanf()`
