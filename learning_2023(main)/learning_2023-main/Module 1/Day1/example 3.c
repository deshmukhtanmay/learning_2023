#include <stdio.h>

     int rollNo;
    char name[100];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;
    
void read() // function for input
{
    
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name); //we use st%[^\n]s  it , it is used to read the name, which can read string with spaces. 
}
  float ftotal(){ //function for taking input of marks and making total of it
     printf("Enter Marks of Physics: ");
    scanf("%f", &physicsMarks);

    printf("Enter Marks of Math: ");
    scanf("%f", &mathMarks);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistryMarks);

    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    return totalMarks;
    
  }

float fpercentage(){
    
    percentage = (totalMarks / 300) * 100;
    return percentage;

}
 void summary(){

     printf("\n  Summary  ");

    printf(" \n Roll No: %d\n", rollNo);

    printf("Name: %s\n", name);

    printf("Physics Marks: %.2f\n", physicsMarks);

    printf("Math Marks: %.2f\n", mathMarks);

    printf("Chemistry Marks: %.2f\n", chemistryMarks);

    printf("Total Marks: %.2f\n", totalMarks);

    printf("Percentage: %.2f%%\n", percentage);

 }
int main() {

    read();
    ftotal();
    fpercentage();
    summary();

    return 0;
}
