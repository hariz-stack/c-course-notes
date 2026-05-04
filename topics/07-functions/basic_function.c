#include <stdio.h>

void singHappyBirthday(const char name[], int age) {
	printf("Happy birthday to you\n");
	printf("Happy birthday to you\n");
	printf("Happy birthday dear %s\n", name);
	printf("Happy birthday to you\n");
	printf("You are %d years old\n\n", age);
}

int main(void) {
	singHappyBirthday("Harish", 19);
	singHappyBirthday("Alex", 21);
	return 0;
}
