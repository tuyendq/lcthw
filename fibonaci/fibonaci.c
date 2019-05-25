#include <stdio.h>

int main(void) {

	int previous = 0;
	int current = 1;
	int next = 0;
	int number = 6; // Print the first six number

	printf("%d ", previous);
	printf("%d ", current);
	for (int i=0; i<(number-2); i++) {
		next = previous + current;
		printf("%d ", next);
		previous = current;
		current = next;
	}

	return 0;
}
