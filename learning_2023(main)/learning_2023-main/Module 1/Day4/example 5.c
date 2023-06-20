#include <stdio.h>

int Difference(int arr[], int size) {
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    return sumOdd - sumEven;
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


    int difference = Difference(arr, size);

    printf("\n \t Difference between odd and even indexed numbers: %d\n", difference);

    return 0;
}
