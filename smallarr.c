#include <stdio.h>
int main() {
    int arr[] = {0, 1, 2, 6,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == s) {
            s++;
        } else if (arr[i] > s) {
            break;
        }
    }
   printf("%d\n", s);
    return 0;
}
