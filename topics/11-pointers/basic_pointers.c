#include <stdio.h>

int main(void) {
	int x = 10;
	int *p = &x;

	printf("x=%d\n", x);
	printf("p=%p\n", (void*)p);
	printf("*p=%d\n", *p);

	*p = 99;  // modifies x
	printf("x=%d\n", x);

	return 0;
}
