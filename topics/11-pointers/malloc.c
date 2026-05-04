#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 5;
	int *arr = malloc(n * sizeof(int));
	if (!arr) return 1;

	for (int i = 0; i < n; i++) arr[i] = (i + 1) * 10;
	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
	printf("\n");

	free(arr);
	return 0;
}
