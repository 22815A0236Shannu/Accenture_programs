#include <stdio.h>
int main() {
    int n = 4; 
    int m = 20; 
    int sum1 = 0;
    int sum2 = 0;

    while (n > 0 && m > 0) {
        for (int i = 1; i <= m; i++) {
            if (i % n == 0) {
                sum1 = sum1 + i;
            } else {
                sum2 = sum2 + i;
            }
        }
        break;
    }
    int x = sum2 - sum1;
    printf("%d\n", x);

    return 0;
}
