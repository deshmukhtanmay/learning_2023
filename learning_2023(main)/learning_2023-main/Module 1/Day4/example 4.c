#include <stdio.h>

int Sum_Even(int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    
    return sum;
}

int Sum_Odd(int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    
    return sum;
}

int main() {
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter an array element : ");
    for (int i = 0; i< size; i++){
        scanf("%d", &arr[i]);
    }

    printf("you have enter array element are:  ");

     for(int i=0;i<size;i++)
     {
        printf("\n %d",arr[i]);
    }


    
    int sum_E = Sum_Even(arr, size);
    int sum_O = Sum_Odd(arr, size);
    
    printf("\n\tSum of even numbers: %d\n", sum_E);

    printf("\n\tSum of odd numbers: %d\n", sum_O);
    
    return 0;
}
