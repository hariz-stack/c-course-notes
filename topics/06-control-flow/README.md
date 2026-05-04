# Control Flow

## If Statements

### Basic Structure

```c
if (condition) {
	// executed if condition is true
} else if (condition) {
	// executed if second condition is true
} else {
	// executed if no conditions were true
}
```

### Comparison Operators

```c
==  // equal
!=  // not equal
<   // less than
<=  // less than or equal
>   // greater than
>=  // greater than or equal
```

## Switch Statements

Use when checking one value against multiple cases. Cleaner than many `else if`s.

```c
switch (value) {
	case 1:
		// code if value == 1
		break;
	case 2:
		// code if value == 2
		break;
	default:
		// code if no cases match
}
```

**Important:** Always use `break;` unless you want fall-through behavior.

## Nested If Statements

Put an `if` inside another `if/else` to branch more precisely.

```c
if (condition1) {
	if (condition2) {
		// both conditions true
	}
}
```
