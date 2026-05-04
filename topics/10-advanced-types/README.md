# Advanced Types

## typedef

Create a type alias for cleaner, more readable code.

```c
typedef unsigned int uint;

uint x = 42;
printf("%u\n", x);
```

## enum

Named integer constants. Great for representing a set of related values.

```c
typedef enum { MON=1, TUE, WED, THU, FRI, SAT, SUN } Day;

Day d = FRI;
printf("Day = %d\n", d);
```

## struct

Bundle multiple fields (of different types) into one type.

```c
typedef struct {
	char name[30];
	int age;
	float gpa;
} Student;

Student s;
strcpy(s.name, "Harish");
s.age = 19;
s.gpa = 8.2f;

printf("%s %d %.2f\n", s.name, s.age, s.gpa);
```

## Arrays of Structs

Combine structs with arrays for collections of complex data.

```c
typedef struct {
	int id;
	float balance;
} Account;

Account a[3] = {
	{1, 100.0f},
	{2, 250.5f},
	{3, 80.0f}
};

for (int i = 0; i < 3; i++) {
	printf("id=%d balance=%.2f\n", a[i].id, a[i].balance);
}
```
