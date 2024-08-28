#include <stdio.h>
int main() {
    int arr[] = {1,1,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    if(arr[n-1]==1){
      printf("odd");
    }
    else
      printf("even");
      }