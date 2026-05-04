#include <stdio.h>

int main(void) {
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 4; c++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
