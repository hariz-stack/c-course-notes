#include <stdio.h>
#include <stdbool.h>

int main(void) {
	float price = 10.0f;
	bool isStudent = false;
	bool isSenior = true;

	if (isStudent) {
		printf("Student discount\n");
		if (isSenior) {
			printf("Senior discount too\n");
			price *= 0.70f; // combined 30% off
		} else {
			price *= 0.90f;
		}
	} else {
		if (isSenior) {
			printf("Senior discount\n");
			price *= 0.80f;
		}
	}

	printf("Final price: $%.2f\n", price);
	return 0;
}
