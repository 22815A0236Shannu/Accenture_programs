#include <stdio.h>
int main() {
    int div = 12;
    int num = 718;
    char result[50]; 
    char rotation[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int index = 0;
    while (num > 0) {
        int remainder = num % div;
        result[index++] = rotation[remainder];
        num = num / div;  
    }
    printf("The number in div with %d is: ", div);
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
    printf("\n");
    return 0;
}
