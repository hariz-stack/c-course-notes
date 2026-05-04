#include <stdio.h>

int main(void) {
	FILE *f = fopen("output.txt", "r");
	if (!f) return 1;

	char line[256];
	while (fgets(line, sizeof(line), f)) {
		printf("%s", line);
	}
	fclose(f);
	return 0;
}
