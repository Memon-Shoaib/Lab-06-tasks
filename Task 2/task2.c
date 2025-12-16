#include <stdio.h>

int main() {
    int townA = 10000;
    int townB = 8000;
    int years = 0;

    while (townB <= townA) {
        townA += 250;
        townB += 400;
        years++;
    }

    printf("Town B will surpass Town A after %d years.\n", years);
    printf("Final Population:\n");
    printf("Town A: %d\n", townA);
    printf("Town B: %d\n", townB);

    return 0;
}
