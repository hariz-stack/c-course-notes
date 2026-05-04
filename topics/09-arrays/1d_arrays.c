#include <stdio.h>

int main(void) {
	int nums[] = {10, 20, 30, 40};
	int len = sizeof(nums) / sizeof(nums[0]);

	for (int i = 0; i < len; i++) {
		printf("%d\n", nums[i]);
	}
	return 0;
}
