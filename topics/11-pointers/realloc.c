#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 3;
	int *arr = malloc(n * sizeof(int));
	if (!arr) return 1;
	for (int i = 0; i < n; i++) arr[i] = i + 1;

	int newN = 6;
	int *tmp = realloc(arr, newN * sizeof(int));
	if (!tmp) { free(arr); return 1; }
	arr = tmp;

	for (int i = n; i < newN; i++) arr[i] = 0;
	for (int i = 0; i < newN; i++) printf("%d ", arr[i]);
	printf("\n");

	free(arr);
	return 0;
}
