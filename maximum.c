#include <stdio.h>

int main(){
    int a,b,c;
    a=9,b=5,c=3;
    if(a>b&&a>c){
        printf("A is the greatest");
    }
    else if(b>a&&b>c){
        printf("B is the greatest");
    }
    else{
        printf("C is the greatest");

    }

    return 0;
}