#include <stdio.h>

typedef enum { MON=1, TUE, WED, THU, FRI, SAT, SUN } Day;

int main(void) {
	Day d = FRI;
	printf("Day = %d\n", d);
	return 0;
}
