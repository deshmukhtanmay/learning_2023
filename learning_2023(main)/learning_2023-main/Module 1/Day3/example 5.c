#include <stdio.h>


void small_large_digit(int n, int numbers[]) 
{
    int small_Digit = 9;
    int large_Digit = 0;

    for (int i = 0; i < n; i++) 
    {
        int temp = numbers[i];

        while (temp > 0) 
        {
            int digit = temp % 10;
            if (digit < small_Digit) 
            {
                small_Digit = digit;
            }
            if (digit > large_Digit) 
            {
                large_Digit = digit;
            }
            temp /= 10;
        }
    }

    printf("Smallest Digit is : %d\n", small_Digit);

    printf("Largest Digit is : %d\n", large_Digit);
}

int main() 
{
    int n;
    printf("How many number you want to enter : ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("\n\tNot Valid\n");
        return 0;
    }

    int numbers[n];

    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter the number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    small_large_digit(n, numbers);

    return 0;
}