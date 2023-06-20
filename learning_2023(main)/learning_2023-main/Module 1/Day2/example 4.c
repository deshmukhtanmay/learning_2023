
#include <stdio.h>

int set_bits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int total_set_bits(int arr[], int size) {
    int total_bits = 0;
    for (int i = 0; i < size; i++) {
        total_bits += set_bits(arr[i]);
    }
    return total_bits;
}

int main() {
    int n;
    printf("Enter the size of arr : ");
    scanf("%d",&n);
    int arr[n];
    int size = sizeof(arr) / sizeof(arr[0]);

    printf(" \n Enter the array element : ");
    int i=0;
    for(i=0; i<n; i++){
        scanf("%x",&arr[i]);
    }


    int set_bits = total_set_bits(arr, size);
    printf("Total number of set bits in the given array is: %d\n", set_bits);

    return 0;
}


 