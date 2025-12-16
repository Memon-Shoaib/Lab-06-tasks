#include <stdio.h>

int main() {
    int base, exponent;
    int result = 1;
    int i;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter non-negative exponent: ");
    scanf("%d", &exponent);

    for (i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d raised to the power %d = %d\n", base, exponent, result);

    return 0;
}
