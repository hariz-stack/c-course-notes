#include <stdio.h>

int main(void) {
	FILE *f = fopen("output.txt", "w");
	if (!f) return 1;

	fprintf(f, "Hello file!\n");
	fprintf(f, "Line 2\n");
	fclose(f);

	printf("File written successfully.\n");
	return 0;
}
