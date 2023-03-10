#include <stdio.h>
int main(){
    int n,flag;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            flag = 1;
            break;
        }else if(n%i!=0){
            flag = 0;
        }
    }
    if(flag==0){
        printf("It is a prime number.");
    }else{
        printf("It is a composite number.");
    }
    return 0;
}