#include <stdio.h>
#include <string.h>
int main() {
    int len = 100;
    char str[len];
    char ch1, ch2;
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Enter the first character: ");
    scanf(" %c", &ch1);
    printf("Enter the replacement character: ");
    scanf(" %c", &ch2);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch1) {
            str[i] = '#';
        } else if (str[i] == ch2) {
            str[i] = ch1;
        }
    }
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '#') {
            str[i] = ch2;
        }
    }
    printf("%s", str);
    return 0;
}
