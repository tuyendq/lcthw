#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i, n, max;
	time_t t;

	max = 100;
	n = 10;

	/* Initialize random number generator */
	srand((unsigned) time(&t));

	/* Print n random numbers from 0 to MAX */
	printf("List of %d random number from 0 to %d:\n", n, max);
	for(i = 0; i < 10; i++){
		printf("%d\n", rand() % max);
	}	

	return 0;
}
