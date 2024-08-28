#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d;
    printf("Enter the rotating position: ");
    scanf("%d", &d);
    d = d % n;
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + d) % n];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}