# Data Types

## Core Types

| Type | Purpose | Example |
|------|---------|----------|
| `int` | Whole numbers | `42`, `-5`, `0` |
| `float` | Decimals (single precision) | `3.14f`, `2.5f` |
| `double` | Decimals (higher precision) | `3.141592653589793` |
| `char` | Single character | `'A'`, `'z'`, `'5'` |
| `char[]` | String (char array) | `"Hello"` |
| `bool` | Boolean (via `<stdbool.h>`) | `true`, `false` |

## Declaration and Initialization

```c
int age = 25;
float gpa = 2.5f;
double pi = 3.141592653589793;
char grade = 'A';
char name[] = "Bro Code";  // char array (string)
bool isOnline = true;
```

## Important Notes

- Float literals need `f` suffix: `2.5f`
- Strings use double quotes: `"text"`
- Chars use single quotes: `'A'`
- Include `<stdbool.h>` for `bool` type
