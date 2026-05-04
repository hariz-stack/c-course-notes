#include <stdio.h>
#include <math.h>

int main(void) {
	const double PI = 3.141592653589793;
	double r = 0.0;

	printf("Enter radius: ");
	scanf("%lf", &r);

	double area = PI * pow(r, 2);
	double surfaceArea = 4.0 * PI * pow(r, 2);
	double volume = (4.0 / 3.0) * PI * pow(r, 3);

	printf("Area: %.2lf\n", area);
	printf("Surface area: %.2lf\n", surfaceArea);
	printf("Volume: %.2lf\n", volume);

	return 0;
}
