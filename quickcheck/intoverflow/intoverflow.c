/* Understand Integer Overflow
*/
#include <stdio.h>

int main() {
	int num = 50000;
	int int_result = num * num;
	int unsigned precision_result = num * num;
	printf("Result as integer: %d\n", int_result);
	printf("Result as precision: %u\n", precision_result);
	
	return 0;
}
