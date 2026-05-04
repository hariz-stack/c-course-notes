# Arrays

## What is an Array?

A **fixed-size contiguous collection** of same-type elements.

- Index starts at 0
- Size is fixed at declaration
- All elements are the same type

## 1D Arrays

```c
int nums[] = {10, 20, 30, 40};
int len = sizeof(nums) / sizeof(nums[0]);

for (int i = 0; i < len; i++) {
	printf("%d\n", nums[i]);
}
```

## 2D Arrays

Think of it like a matrix: rows × columns.

```c
int grid[2][3] = {
	{1, 2, 3},
	{4, 5, 6}
};

for (int r = 0; r < 2; r++) {
	for (int c = 0; c < 3; c++) {
		printf("%d ", grid[r][c]);
	}
	printf("\n");
}
```

## Arrays of Strings

A "string" is `char[]`. Multiple strings are stored as `char words[][SIZE]`.

```c
char foods[][10] = {"pizza", "burger", "taco"};
int len = sizeof(foods) / sizeof(foods[0]);

for (int i = 0; i < len; i++) {
	printf("%s\n", foods[i]);
}
```

## User Input with Arrays

```c
int n = 5;
int a[5];

for (int i = 0; i < n; i++) {
	printf("Enter a[%d]: ", i);
	scanf("%d", &a[i]);
}
```
