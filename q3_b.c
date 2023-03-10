#include <stdio.h>
int main(){
    int a,b,c,new,result;
    printf("Enter 3 numbers to compare: ");
    scanf("%d %d %d",&a,&b,&c);
    result = (new = a>b?a:b)>c?new:c;  // Ternary Operator
    printf("Greatest among 3 numbers is %d",result);
    return 0;
}