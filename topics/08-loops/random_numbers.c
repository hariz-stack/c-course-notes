#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((unsigned)time(NULL));
	int n = (rand() % 6) + 1; // 1..6
	printf("Dice: %d\n", n);
	return 0;
}
