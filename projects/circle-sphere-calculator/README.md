# Circle & Sphere Calculator Project

## Goal

Calculate circle area and sphere surface area/volume using math functions.

## Concepts Used

- `<math.h>` library functions
- `pow()` for exponentiation
- Constants (pi)
- Mathematical formulas
- User input and formatted output

## Formulas

- Circle area: $A = \pi r^2$
- Sphere surface area: $SA = 4\pi r^2$
- Sphere volume: $V = \frac{4}{3}\pi r^3$

## How It Works

1. Define pi as a constant
2. Ask user for radius
3. Calculate all three values using the formulas
4. Display results with 2 decimal places

## Compile & Run

```bash
gcc -o circle_sphere circle_sphere.c -lm
./circle_sphere
```

**Note:** The `-lm` flag links the math library.
