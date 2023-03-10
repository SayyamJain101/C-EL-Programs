#include <stdio.h>
int main(){
    int units = 400,bill;
    if(units>=1 && units<50){
        bill = 4*units;
    }else if(units>50 && units<100){
        bill = 4.5*units;
    }else if(units>=100 && units<150){
        bill = 5*units;
    }else if(units>=150){
        bill = 6*units;
    }
    return 0;
}