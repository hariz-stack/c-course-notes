#include <stdio.h>

typedef struct {
	int id;
	float balance;
} Account;

int main(void) {
	Account a[3] = {
		{1, 100.0f},
		{2, 250.5f},
		{3, 80.0f}
	};

	for (int i = 0; i < 3; i++) {
		printf("id=%d balance=%.2f\n", a[i].id, a[i].balance);
	}
	return 0;
}
