#include <stdio.h>

int main(void) {
	// int *ptr;
	int i;
	        for(i=0; i<10; i++) {
			// ptr = &i;
			printf("%d is stored ad %p\n", i, &i);
		}

	return 0;
}
