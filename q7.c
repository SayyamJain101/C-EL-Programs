#include <stdio.h>

int bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int temp = 0;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int n;
    printf("Enter the lenght of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    return 0;
}