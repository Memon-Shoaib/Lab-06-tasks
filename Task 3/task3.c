#include <stdio.h>

int main() {
    // For student id = 25k-2019
    int secondLast = 1; 
    int last = 9;       
    int count = 0;
    int num = 1;

    printf("First 10 numbers divisible by both %d and %d:\n", secondLast, last);

    while (count < 10) {
        if (num % secondLast == 0 && num % last == 0) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }

    return 0;
}
