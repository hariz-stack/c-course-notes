#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int age = 25;
	float gpa = 2.5f;
	double pi = 3.141592653589793;
	char grade = 'A';
	char name[] = "Bro Code"; // char array (string)
	bool isOnline = true;

	printf("Age: %d\n", age);
	printf("GPA: %.2f\n", gpa);
	printf("Pi: %.15lf\n", pi);
	printf("Grade: %c\n", grade);
	printf("Name: %s\n", name);
	printf("Online: %d\n", isOnline); // prints 1 or 0

	return 0;
}
