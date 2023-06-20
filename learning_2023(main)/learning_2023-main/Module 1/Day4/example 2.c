#include<stdio.h>

int Min(int arr[], int size) {
    int min = arr[0];  

    for (int i = 1; i < size; i++) {
        if (arr[i]<min)
    {
            min = arr[i];  
    }

    return min;
}
}

int Max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int size,maximum,minimum;
    printf("enter the size of array : ");
    scanf("%d",&size);
    int arr[size];

    printf("enter the  %d array element :\n ",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

     printf("you have enter array element are:  ");

     for(int i=0;i<size;i++)
     {
        printf("\n %d",arr[i]);
    }

    minimum=Min(arr,size);
    printf("\n\tThe minimum element in given array is : %d",minimum);
    maximum=Max(arr,size);
    printf("\n\tThe maximum element in given array is : %d",maximum);
    return 0;
}

