# Operators

## Format Specifiers

| Specifier | Type |
|-----------|------|
| `%d` | `int` |
| `%f` | `float` |
| `%lf` | `double` |
| `%c` | `char` |
| `%s` | string (`char[]`) |

### Width & Precision

```c
printf("%4d\n", 7);        // width 4, right-aligned
printf("%+d\n", 7);        // show sign
printf("%07d\n", 7);       // leading zeros
printf("%.2lf\n", 19.99);  // precision 2 decimals
```

## Arithmetic Operators

| Operator | Purpose | Example |
|----------|---------|----------|
| `+` | Addition | `a + b` |
| `-` | Subtraction | `a - b` |
| `*` | Multiplication | `a * b` |
| `/` | Division | `a / b` |
| `%` | Modulo (remainder) | `a % b` |
| `++` | Increment | `x++` or `++x` |
| `--` | Decrement | `x--` or `--x` |

## Augmented Assignment

```c
x += 2;   // x = x + 2
x -= 2;   // x = x - 2
x *= 2;   // x = x * 2
x /= 2;   // x = x / 2
```

## Logical Operators

| Operator | Purpose |
|----------|----------|
| `&&` | AND (both must be true) |
| `\|\|` | OR (at least one true) |
| `!` | NOT (flip true/false) |

## Comparison Operators

```c
==  // equal
!=  // not equal
<   // less than
<=  // less than or equal
>   // greater than
>=  // greater than or equal
```

## Ternary Operator

Short form of `if/else`:

```c
condition ? value_if_true : value_if_false
```
