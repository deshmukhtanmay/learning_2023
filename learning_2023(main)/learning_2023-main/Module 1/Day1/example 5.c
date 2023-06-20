#include <stdio.h>

int bit_operations(int num, int oper_type) {
    if (oper_type == 1) {
        num |= 1;
    }
    else if (oper_type == 2) {       
        num = num &~(1 << 31);
    }

    else if (oper_type == 3) {
        num = num ^(1 << 16);
    }

    return num;
}

int main() {
    int num; // Example input number
    int oper_type;
    int result;  // Example operation type
    printf("\nEnter the num : ");
    scanf("%d",&num);
    printf("\n Enter the operator type : ");
    scanf("%d",&oper_type);

    result = bit_operations(num, oper_type);
    printf("Result:  %d\n", result);

    return 0;
}
