#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "bB1_@89"; 
    int digit = 0, upper = 0, password = 1;
    int length = strlen(str);

    if (length < 4) {
        printf("0");
    }

    if (str[0] >= '0' && str[0] <= '9') {
        printf("0");
    }

    for (int i = 0; i < length; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digit = 1;
        }
        if (str[i] >= 'A' && str[i] <= 'Z') {
            upper = 1;
        }
        if (str[i] == ' ' || str[i] == '/') {
            password = 0;
        }
    }

    if (digit && upper && password) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}
