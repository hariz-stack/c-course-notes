#include <stdio.h>

int main(void) {
	int x = 10;
	int y = 3;

	printf("x + y = %d\n", x + y);
	printf("x - y = %d\n", x - y);
	printf("x * y = %d\n", x * y);
	printf("x / y = %d\n", x / y); // integer division
	printf("x %% y = %d\n", x % y); // remainder

	x += 2;
	printf("x after += 2: %d\n", x);

	return 0;
}
