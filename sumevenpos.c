#include <stdio.h>
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int sumEvenPositions(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, n);
    int result = sumEvenPositions(arr,n);
    printf("%d\n", result);
    return 0;
}