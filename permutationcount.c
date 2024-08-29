#include <stdio.h>
#include <string.h>
#include <ctype.h>
int factorial(int n) {
    if (n <= 1) 
      return 1; 
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
int countPermutations(char *S) {
    int vowelCount = 0, consonantCount = 0;
    for (int i = 0; S[i] != '\0'; i++) {
        char ch = tolower(S[i]);
          if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        } 
        else if (isalpha(ch)) {
            consonantCount++;
        }
    }
    if (consonantCount == 0) {
        return 0;
    }
    return factorial(consonantCount);
}
int main() {
    char S[] = "CDF";
    int result = countPermutations(S);
    printf("%d\n", result);
    return 0;
}