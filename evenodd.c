#include <stdio.h>
#include <string.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    char result[100] = "";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            strcat(result, "Even");
        } else {
            strcat(result, "Odd");
        }
    }
    printf("%s\n", result);
    return 0;
}