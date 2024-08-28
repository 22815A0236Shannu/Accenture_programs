#include <stdio.h>
int main()
{
    int arr[100], pos, i,len,ele;   
    printf("Enter number of elements in the array\n");
    scanf("%d", &len);
    printf("enter the array: ");
    for (i = 0; i <len; i++)    
        scanf("%d", &arr[i]);  
    printf("enter the pos\n");
    scanf("%d", &pos);   
    printf("enter the ele\n");
    scanf("%d", &ele);   
    for (i = len; i >= pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = ele;
    len++;  
    printf("Resultant array is\n"); 
    for (i = 0; i<len; i++)    
        printf("%d", arr[i]);       
    return 0;
}