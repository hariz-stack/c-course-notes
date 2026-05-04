#include <stdio.h>
#include <string.h>

typedef struct {
	char name[30];
	int age;
	float gpa;
} Student;

int main(void) {
	Student s;
	strcpy(s.name, "Harish");
	s.age = 19;
	s.gpa = 8.2f;

	printf("%s %d %.2f\n", s.name, s.age, s.gpa);
	return 0;
}
