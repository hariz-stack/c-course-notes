# Compound Interest Project

## Goal

Calculate compound interest using the compound interest formula.

## Concepts Used

- `<math.h>` functions
- `pow()` for exponentiation
- Complex mathematical formula
- Multiple user inputs
- Formatted output

## Formula

$$A = P\left(1 + \frac{r}{n}\right)^{nt}$$

Where:
- $A$ = Final amount
- $P$ = Principal (initial investment)
- $r$ = Annual interest rate (as decimal)
- $n$ = Times compounded per year
- $t$ = Number of years

## How It Works

1. Ask for principal amount
2. Ask for interest rate (as percentage)
3. Ask for number of years
4. Ask for compounding frequency
5. Calculate final amount using formula
6. Display result

## Compile & Run

```bash
gcc -o compound_interest compound_interest.c -lm
./compound_interest
```
