#include <stdio.h>
int main() {
    int arr[] = {10,20,20,10,10,20,5,20};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Element | Frequency\n");
    for (int i = 0; i < n; i++) {
        int count = 1;
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (j == i) {
            for (int k = i + 1; k < n; k++) {
                if (arr[i] == arr[k]) {
                    count++;
                }
            }
            printf("%d | %d\n", arr[i], count);
        }
    }
    return 0;
}
