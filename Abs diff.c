#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, num, diff, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter num: ");
    scanf("%d", &num);
    printf("Enter diff: ");
    scanf("%d", &diff);
    for (i = 0; i < n; i++) {
        if (abs(arr[i] - num) <= diff) {
            count++;
        }
    }
    if (count > 0) {
        printf("Count: %d\n", count);
    } else {
        printf("-1\n");
    }
    return 0;
}
