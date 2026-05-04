#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int temp = 20;
	bool isSunny = false;

	if (temp > 0 && temp < 30) {
		printf("Temperature is good.\n");
	} else {
		printf("Temperature is bad.\n");
	}

	if (!isSunny) {
		printf("It's not sunny.\n");
	}

	return 0;
}
