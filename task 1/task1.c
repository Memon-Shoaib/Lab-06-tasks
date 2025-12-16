#include <stdio.h>
#include <math.h>

int main() {
    double principal = 1000.0;   
    double rate = 0.05;         
    double amount;
    int year;

    printf("Year\tAmount\n");

    for (year = 1; year <= 10; year++) {
        amount = principal * pow(1 + rate, year);
        printf("%d\t%.2f\n", year, amount);
    }

    return 0;
}
