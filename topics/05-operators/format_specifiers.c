#include <stdio.h>

int main(void) {
	int n = 7;
	double price = 19.99;

	printf("%4d\n", n);      // width 4
	printf("%+d\n", n);      // show sign
	printf("%07d\n", n);     // leading zeros
	printf("%.2lf\n", price); // precision 2

	return 0;
}
