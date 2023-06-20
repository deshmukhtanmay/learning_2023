#include<stdio.h>

void printExponent(double num) {
    unsigned long long *ptr = (unsigned long long *)&num;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;
    
    printf("Exponent (Hex): 0x%llX\n", exponent);
    
    printf("Exponent (Binary): ");
    for (int i = 10; i >= 0; i--) {
        printf("%lld", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 2;
    
    printf("Number: %.17g\n", x);
    printExponent(x);
    
    return 0;
}