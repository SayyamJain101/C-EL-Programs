#include <stdio.h>
int main(){
    int n;
    printf("Enter a number of elements you want of fibonacci series: ");
    scanf("%d",&n);
    int arr[100]={0,1};
    for(int i=0;i<n;i++){
        arr[i+2] = arr[i+1] + arr[i];
        printf("%d ",arr[i]);
    }
    return 0;
}