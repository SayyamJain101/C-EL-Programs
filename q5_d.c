#include <stdio.h>
int main(){
    int i=2,n,flag=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    do{
        if(n%i==0){
            flag=1;
            break;
        }else{
            flag=0;
        }
        i++;
    }while(i<n/2);
    if(flag==1){
        printf("It is a composite number.");
    }else{
        printf("It is a prime number.");
    }
    return 0;
}