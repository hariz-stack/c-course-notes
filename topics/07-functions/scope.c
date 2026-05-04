#include <stdio.h>

int g = 5; // global

void demo(void) {
	int x = 10; // local
	printf("g=%d x=%d\n", g, x);
}

int main(void) {
	demo();
	return 0;
}
