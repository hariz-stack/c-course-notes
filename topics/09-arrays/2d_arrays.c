#include <stdio.h>

int main(void) {
	int grid[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	for (int r = 0; r < 2; r++) {
		for (int c = 0; c < 3; c++) {
			printf("%d ", grid[r][c]);
		}
		printf("\n");
	}
	return 0;
}
