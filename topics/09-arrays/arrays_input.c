#include <stdio.h>

int main(void) {
	int n = 5;
	int a[5];

	for (int i = 0; i < n; i++) {
		printf("Enter a[%d]: ", i);
		scanf("%d", &a[i]);
	}

	printf("You entered: ");
	for (int i = 0; i < n; i++) printf("%d ", a[i]);
	printf("\n");

	return 0;
}
