# Temperature Converter Project

## Goal

Convert temperature between Celsius and Fahrenheit.

## Concepts Used

- User choice with character input
- Conditional logic (if/else with OR operator)
- Mathematical formulas
- Case-insensitive input handling

## Conversions

- C → F: `F = (C × 9/5) + 32`
- F → C: `C = (F - 32) × 5/9`

## How It Works

1. Display menu with two options (C or F)
2. Ask user for choice (handles both upper and lowercase)
3. Based on choice, perform appropriate conversion
4. Display result with one decimal place

## Compile & Run

```bash
gcc -o temp_converter temp_converter.c
./temp_converter
```
