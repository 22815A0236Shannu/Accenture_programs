#include<stdio.h>
#include <stdio.h>
int main() {
    int arr[] = {1,2,2,3,4,4,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
          arr[j]='D';
        }
      }
    }
    for(int i=0;i<n;i++){
      if(arr[i]!='D'){
        printf("%d",arr[i]);
      }
    }
    }