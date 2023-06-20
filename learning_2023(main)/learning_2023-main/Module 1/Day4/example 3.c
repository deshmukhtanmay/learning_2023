#include<stdio.h>

void reverse_array(int arr[],int n){
    printf("Reversed array: ");
    for (int i = n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

}

int main() {
   
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
     int arr[n];


    printf("Enter an array: ");
    for (int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }

   
    reverse_array(arr,n);

    return 0;
}