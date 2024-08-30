#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);  
    printf("Enter the second number: ");
    scanf("%d", &num2);  
    int carry = 0;     
    int carry_count = 0;
    while (num1 > 0 || num2 > 0) {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;
        int sum = digit1 + digit2 + carry;
        if (sum > 9) {
            carry = 1;
            carry_count++;
        }
        else {
            carry = 0;
        }
        num1 = num1/10;
        num2 = num2/10;
    }
    printf("Total number of carries: %d\n", carry_count);
    return 0;
}
