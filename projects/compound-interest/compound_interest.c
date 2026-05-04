#include <stdio.h>
#include <math.h>

int main(void) {
	double principal = 0.0;
	double ratePercent = 0.0;
	int years = 0;
	int timesCompounded = 0;

	printf("Compound interest calculator\n\n");
	printf("Enter principal: ");
	scanf("%lf", &principal);

	printf("Enter interest rate (percent): ");
	scanf("%lf", &ratePercent);
	double rate = ratePercent / 100.0;

	printf("Enter number of years: ");
	scanf("%d", &years);

	printf("Enter times compounded per year: ");
	scanf("%d", &timesCompounded);

	double total = principal * pow(1.0 + (rate / timesCompounded), timesCompounded * years);

	printf("\nAfter %d years, total = $%.2lf\n", years, total);
	return 0;
}
