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

	getchar();
	printf("Enter full name: ");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0';

	printf("\nAge=%d\nGPA=%.2f\nGrade=%c\nName=%s\n", age, gpa, grade, name);
	return 0;
}
