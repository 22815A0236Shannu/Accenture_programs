#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "1C0C1C1A0B1"; 
    int length = strlen(str);
    int result;
    if (str[0] == '1') {
        result = 1;
    }
     else {
        result = 0;
    }
    for (int i = 1; i < length; i++) {
        int operand;
        if (str[i + 1] == '1') {
            operand = 1;
        } else {
            operand = 0;
        }     
        if (str[i] == 'A') {
            result &= operand;
        } 
        else if (str[i] == 'B') {
            result |= operand; 
        } 
        else if (str[i] == 'C') {
            result ^= operand;
        }       
        i++;
    }   
    printf("%d", result);  
    return 0;
}
