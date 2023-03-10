#include <stdio.h>
int main(){
    int n;
    printf("Enter the number which you want to check in array: ");
    scanf("%d",&n);
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        if(n==arr[i]){
            printf("Yes it is present in the array!\nAt index %d",i);
        }
    }
    return 0;
}