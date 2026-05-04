# Pointers

## What is a Pointer?

A **pointer** stores a memory address.

## Key Operators

- **`&`** (address-of) - Gets the address of a variable
- **`*`** (dereference) - Reads/writes the value at an address

## Basic Pointer Usage

```c
int x = 10;
int *p = &x;        // p points to x

printf("x=%d\n", x);
printf("p=%p\n", (void*)p);  // print address
printf("*p=%d\n", *p);       // print value at address (10)

*p = 99;             // modify x through pointer
printf("x=%d\n", x); // now x=99
```

## Memory Management

Dynamically allocate memory at runtime:

### malloc

Allocate memory (not initialized):

```c
int *arr = malloc(5 * sizeof(int));
if (!arr) return 1;  // check for failure

for (int i = 0; i < 5; i++) arr[i] = (i + 1) * 10;
for (int i = 0; i < 5; i++) printf("%d ", arr[i]);

free(arr);  // always free when done
```

### calloc

Allocate memory and **zero-initialize** it:

```c
int *arr = calloc(5, sizeof(int));  // all zeros
if (!arr) return 1;

for (int i = 0; i < 5; i++) printf("%d ", arr[i]);  // all 0

free(arr);
```

### realloc

Resize a previously allocated block:

```c
int n = 3;
int *arr = malloc(n * sizeof(int));
for (int i = 0; i < n; i++) arr[i] = i + 1;

int newN = 6;
int *tmp = realloc(arr, newN * sizeof(int));
if (!tmp) { free(arr); return 1; }
arr = tmp;  // assign to arr

for (int i = n; i < newN; i++) arr[i] = 0;
for (int i = 0; i < newN; i++) printf("%d ", arr[i]);

free(arr);
```

## Important Rules

1. Always `free()` what you `malloc()`
2. Check if allocation succeeded (not NULL)
3. Don't use pointers after `free()`
4. Use `(void*)` cast when printing pointers with `%p`
