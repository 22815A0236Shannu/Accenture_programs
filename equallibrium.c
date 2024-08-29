#include <stdio.h>
int findequilibriumpoint(int arr[], int n) {
    if (n == 0) {
        return -1;
    }
    int totalsum = 0;
    int leftsum = 0;
    for (int i = 0; i < n; i++) {
        totalsum += arr[i];
    }
    for (int i = 0; i < n; i++) {
        totalsum -= arr[i];
        if (leftsum == totalsum) {
            return i;
        }
        leftsum += arr[i];
    }
    return -1;
}
int main() {
    int arr[] = {-7,1,5,2,-4,3,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = findequilibriumpoint(arr, n);
    if (index != -1) {
        printf("%d\n", index);
    } else {
        printf("No equilibrium point found\n");
    }
    return 0;
}