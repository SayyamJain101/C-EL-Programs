#include <stdio.h>
int main(){
    int i=0,n;
    printf("Enter the number of elements you want of fibonacci series: ");
    scanf("%d",&n);
    int arr[100]={0,1};
    do{
        arr[i+2] = arr[i+1] + arr[i];
        printf("%d ",arr[i]);
        i++;
    }while(i<n);
    return 0;
}