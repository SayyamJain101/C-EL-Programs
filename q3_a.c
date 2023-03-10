#include <stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int temp = n;
    int arr[3];
    int sum = 0;
    for(int i=0;i<3;i++){
        arr[i] = n%10;
        n = n/10;
        sum += (arr[i]*arr[i]*arr[i]);
    }
    if(sum==temp){
        printf("It is an Armstrong number.");
    }else{
        printf("It is not an Armstrong number.");
    }
    return 0;
}
// Concept of Armstrong number
// 371 is a Armstrong number
// (3*3*3) + (7*7*7) + (1*1*1) = 371
// Addition of cube of each element of a number is equal to the actual number.
// It is valid for three digit number only.