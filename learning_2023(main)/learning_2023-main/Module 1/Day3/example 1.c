#include<stdio.h>

void Print_Number(int n)
{
	int i;
	for(i=1;i<=n;i++)
    {
		printf("%d",i);
	}

}
void Show_Number_first(int n)
{
	int i;
	for(i=n;i>=1;i--)
    {
		printf("%d",i);
	}

}
void Print_Blank_Spaces(int n)
{
int i, j;
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }
        for (j = 1; j <= (n - i) * 2; j++)
         {
            printf(" ");
         }
        for (j = i; j >= 1; j--)
         {
            printf("%d", j);
         }
        printf("\n");
    }

}


int main(){
	int number;
	printf("Enter a number:");
	scanf("%d",&number);

	Print_Number(number);

	Show_Number_first(number);

	printf("\n");

    Print_Blank_Spaces(number);
    
	return 0;
}