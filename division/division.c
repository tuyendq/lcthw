#include <stdio.h>

int main() {
    int i1 = 10;
    int i2 = 3;
    int quotient, remainder;
    float f1 = 4.2;
    float f2 = 2.5;
    float result;

    quotient = i1 / i2;
    remainder = i1 % i2;
    result = f1 / f2;

    printf("\n%d %d %f\n", quotient, remainder, result);
    return 0;
}
