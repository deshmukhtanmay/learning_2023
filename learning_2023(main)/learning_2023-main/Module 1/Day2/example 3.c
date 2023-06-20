#include <stdio.h>


int main() {
    int n;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    int a[n];
     int size = n;


   printf("enter the array element : \n");
    int j;
    for(j=0; j<n; j++){
        scanf("%d",&a[j]);
    }


    
    int sum = 0;
   for (int i = 0; i < size; i += 2) {
       sum += a[i];
    }
    

    printf("Sum of the alternate elements is : %d\n", sum);
    
    
    return 0;
}
