#include <stdio.h>

int main(void) {
	char foods[][10] = {"pizza", "burger", "taco"};
	int len = sizeof(foods) / sizeof(foods[0]);

	for (int i = 0; i < len; i++) {
		printf("%s\n", foods[i]);
	}
	return 0;
}
