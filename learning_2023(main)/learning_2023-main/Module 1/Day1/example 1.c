#include<stdio.h>

void cheack_biggerno(int aa ,int bb){
    
    if(aa==bb){
         printf("Both no are equal");
    }
    else{
    (aa>bb)?printf("first no is bigger than b"):printf("second no is bigger than first");
    }
  }
int main()
{
    int a,b;
    //int ans;
    printf("Enter the first no = ");
    scanf("%d",&a);
    printf("Enter the second no =");
    scanf("%d",&b);
    cheack_biggerno(a,b);
    return 0;
}
 