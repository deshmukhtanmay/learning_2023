#include <stdio.h>

void showbits(unsigned n) 
{
    for (int i = 31; i >= 0; i--)
     {
        unsigned Bit = (n >> i) & 1;

        printf("%u", Bit);
    }
    printf("\n");
}

int main() {
    unsigned no;
    printf("\n Enter the 32-bit integer number : ");
    scanf("%u", &no);
    
    showbits(no);

    return 0;
}
