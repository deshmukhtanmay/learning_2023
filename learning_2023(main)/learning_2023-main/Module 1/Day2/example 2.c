#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    unsigned char *p = (unsigned char *)a;
    unsigned char *q = (unsigned char *)b;
    unsigned char temp;
    
    for (size_t i = 0; i < size; i++) {
        temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}

int main() {
    int num1 = 55, num2 = 25;
    printf("For Integer :- \n");
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2, sizeof(int));
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
    
    printf("For Doubles :- \n");
    double pi = 3.14, e = 2.30;
    printf("Before swap: pi = %lf, e = %lf\n", pi, e);
    swap(&pi, &e, sizeof(double));
    printf("After swap: pi = %lf, e = %lf\n", pi, e);
    
    printf("For Characters :- \n");
    char ch1 = 'X', ch2 = 'Y';
    printf("Before swap: ch1 = %c, ch2 = %c\n", ch1, ch2);
    swap(&ch1, &ch2, sizeof(char));
    printf("After swap: ch1 = %c, ch2 = %c\n", ch1, ch2);
    
    return 0;
}

