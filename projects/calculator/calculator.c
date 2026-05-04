#include <stdio.h>

int main(void) {
	double a = 0.0, b = 0.0, result = 0.0;
	char op = '\0';

	printf("Enter first number: ");
	scanf("%lf", &a);

	printf("Enter operator (+ - * /): ");
	scanf(" %c", &op);

	printf("Enter second number: ");
	scanf("%lf", &b);

	switch (op) {
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			if (b == 0) {
				printf("Cannot divide by zero.\n");
				return 1;
			}
			result = a / b;
			break;
		default:
			printf("Invalid operator.\n");
			return 1;
	}

	printf("Result: %.4lf\n", result);
	return 0;
}
