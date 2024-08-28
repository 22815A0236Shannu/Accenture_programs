#include <stdio.h>
int main() {
    int arr[] = { 1,2,3,4,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, cpos, j;
    for (i = 1; i < n; i++) {
        cpos= arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > cpos) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = cpos;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
   return 0;
}
