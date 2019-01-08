#include <stdio.h>

int main() {
    char a[100];

    gets(a);
    printf("You entered: %s.\n", a);

    return 0;
}
