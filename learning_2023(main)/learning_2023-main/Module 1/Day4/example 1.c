#include<stdio.h>

void sum_avg(int arr[],int n){
     int sum=0,avg;
    
    for ( int i = 0; i < n; i++)
    {
        sum = sum+arr[i];
    }
    printf("\n addition is : %d",sum);
    avg = sum/n;
    printf("\naverage is  : %d", avg);

}

int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
   int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter the array element: ");
        scanf("%d",&arr[i]);

    }
    
    sum_avg(arr,n);
    return 0;
}