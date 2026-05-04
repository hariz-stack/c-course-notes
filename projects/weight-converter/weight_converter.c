#include <stdio.h>

int main(void) {
	int choice = 0;
	float pounds = 0.0f;
	float kilograms = 0.0f;

	printf("Weight Conversion Calculator\n");
	printf("1) kg -> lb\n");
	printf("2) lb -> kg\n");
	printf("Enter choice: ");
	scanf("%d", &choice);

	if (choice == 1) {
		printf("Enter weight in kilograms: ");
		scanf("%f", &kilograms);
		pounds = kilograms * 2.20462f;
		printf("%.2f kg = %.2f lb\n", kilograms, pounds);
	} else if (choice == 2) {
		printf("Enter weight in pounds: ");
		scanf("%f", &pounds);
		kilograms = pounds / 2.20462f;
		printf("%.2f lb = %.2f kg\n", pounds, kilograms);
	} else {
		printf("Invalid choice.\n");
	}

	return 0;
}
