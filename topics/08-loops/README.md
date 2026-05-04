# Loops

## While Loops

Repeats while a condition is true.

```c
while (condition) {
	// code repeats while condition is true
}
```

## For Loops

Best when you know the number of iterations.

```c
for (initialization; condition; increment) {
	// code repeats
}
```

Example:
```c
for (int i = 0; i < 5; i++) {
	printf("i=%d\n", i);
}
```

## Break & Continue

- **`break`** - Exits the loop completely
- **`continue`** - Skips the rest of the current iteration

```c
for (int i = 1; i <= 10; i++) {
	if (i == 3) continue;  // skip 3
	if (i == 8) break;      // stop at 8
	printf("%d ", i);
}
```

## Nested Loops

Put a loop inside another loop.

```c
for (int r = 0; r < 3; r++) {
	for (int c = 0; c < 4; c++) {
		printf("*");
	}
	printf("\n");
}
```

This prints a 3×4 grid of asterisks.

## Random Numbers

Use `rand()` to generate pseudo-random numbers. Seed with `srand(time(NULL))` for different sequences.

```c
srand((unsigned)time(NULL));  // seed
int dice = (rand() % 6) + 1;  // 1..6
```
