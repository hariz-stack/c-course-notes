#include <stdio.h>

int main(void) {
	for (int i = 1; i <= 10; i++) {
		if (i == 3) continue;
		if (i == 8) break;
		printf("%d ", i);
	}
	printf("\n");
	return 0;
}
