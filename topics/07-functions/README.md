# Functions

## What is a Function?

A **function** is reusable code you can call multiple times.

## Function Parts

```c
return_type function_name(parameters) {
	// function body
	return value;  // if return_type is not void
}
```

- **Return type:** `void` (no return), `int`, `float`, etc.
- **Name:** Descriptive identifier
- **Parameters:** Inputs to the function
- **Body:** Code to execute
- **Return:** Value to send back to caller

## Important Concepts

- **Arguments:** Values you pass when calling a function
- **Parameters:** Variables the function receives
- `void` return type means function returns nothing
- `void` as parameter means function takes no arguments

## Function Prototypes

A **prototype** tells the compiler a function exists before it's defined. Useful when defining helper functions below `main()`.

```c
int multiply(int a, int b); // prototype

int main(void) {
	printf("%d\n", multiply(3, 4));
	return 0;
}

int multiply(int a, int b) {
	return a * b;
}
```

## Variable Scope

- **Local variables:** Exist only inside `{ ... }` block
- **Global variables:** Exist for whole program (avoid unless needed)
