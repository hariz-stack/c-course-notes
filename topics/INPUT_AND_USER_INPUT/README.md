# User Input (scanf & fgets)

## scanf

Reads formatted input. For numbers, use the address-of operator `&`.

```c
int age = 0;
printf("Enter age: ");
scanf("%d", &age);  // & required for numbers
```

## For Strings with Spaces

Use `fgets()` instead of `scanf()` to read entire lines including spaces.

```c
char name[30] = "";
printf("Enter name: ");
fgets(name, sizeof(name), stdin);
name[strcspn(name, "\n")] = '\0';  // remove trailing newline
```

## Format Specifiers for Input

| Specifier | Type |
|-----------|------|
| `%d` | `int` |
| `%f` | `float` |
| `%lf` | `double` |
| `%c` | `char` |
| `%s` | string (char array) |

## Handling Input Issues

### Skip Newline for char

Add a leading space in the format specifier:

```c
scanf(" %c", &ch);  // leading space skips whitespace
```

### After scanf, Before fgets

Use `getchar()` to consume leftover newline:

```c
scanf("%d", &age);
getchar();  // consume newline
fgets(name, sizeof(name), stdin);
```

## Complete Example

```c
#include <stdio.h>
#include <string.h>

int main(void) {
	int age = 0;
	float gpa = 0.0f;
	char grade = '\0';
	char name[30] = "";

	printf("Enter age: ");
	scanf("%d", &age);

	printf("Enter GPA: ");
	scanf("%f", &gpa);

	printf("Enter grade: ");
	scanf(" %c", &grade);

	getchar();  // consume newline
	printf("Enter full name: ");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0';

	printf("\nAge=%d\nGPA=%.2f\nGrade=%c\nName=%s\n", age, gpa, grade, name);
	return 0;
}
```
