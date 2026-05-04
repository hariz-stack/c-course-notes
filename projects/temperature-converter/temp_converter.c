#include <stdio.h>

int main(void) {
	char choice = '\0';
	float f = 0.0f;
	float c = 0.0f;

	printf("Temperature Conversion\n");
	printf("C) Celsius -> Fahrenheit\n");
	printf("F) Fahrenheit -> Celsius\n");
	printf("Enter choice: ");
	scanf(" %c", &choice);

	if (choice == 'C' || choice == 'c') {
		printf("Enter Celsius: ");
		scanf("%f", &c);
		f = (c * 9.0f / 5.0f) + 32.0f;
		printf("%.1f C = %.1f F\n", c, f);
	} else if (choice == 'F' || choice == 'f') {
		printf("Enter Fahrenheit: ");
		scanf("%f", &f);
		c = (f - 32.0f) * 5.0f / 9.0f;
		printf("%.1f F = %.1f C\n", f, c);
	} else {
		printf("Invalid choice.\n");
	}

	return 0;
}
