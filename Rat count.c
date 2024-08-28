#include <stdio.h>
int main() {
    int r = 7;            
    int unit = 2;            
    int arr[] = {2, 8, 3, 5}; 
    int n = 4;                
    int totalFoodRequired = r * unit;
    int sum = 0;
    int result = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum >= totalFoodRequired) {
            result = i + 1;
            break;
        }
    }   
    if (result) {
        printf("%d", result);
    } else {
         return 0;
         }
    return 0;
}
