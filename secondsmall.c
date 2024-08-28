#include <stdio.h>
#include <limits.h>
int main() {
    int arr[] = {3,2,1,7,5,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (size == 0 || size <= 3) {
        printf("0\n");
        return 0;
    }
    int evenMax1 = arr[0];
    int evenMax2 = 0;
    for (int i = 2; i < size; i += 2) {
        if (arr[i] > evenMax1) {
            evenMax2 = evenMax1;
            evenMax1 = arr[i];
        } else if (arr[i] > evenMax2 && arr[i] != evenMax1) {
            evenMax2 = arr[i];
        }
    }
    int oddMin1 = arr[1];
    int oddMin2 = INT_MAX;
    for (int i = 3; i < size; i += 2) {
        if (arr[i] < oddMin1) {
            oddMin2 = oddMin1;
            oddMin1 = arr[i];
        } else if (arr[i] < oddMin2 && arr[i] != oddMin1) {
            oddMin2 = arr[i];
        }
    }
    printf("%d\n", evenMax2 + oddMin2);  
    return 0;
}