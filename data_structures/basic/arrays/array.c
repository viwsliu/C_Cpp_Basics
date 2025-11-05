#include <stdio.h>

int arr[5]; // creates an array of 5 integers

int main(void) {
	// a fixed / static size array (size known at compile time)
	int nums[5] = {1,2,3,4,5};

	for(int i = 0; i<5; i++) {
		printf("%d\n", nums[i]);
	}
	return 0;
}
