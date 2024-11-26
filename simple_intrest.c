#include <stdio.h>

int main(){
    int p,t,r,simple_intrest;
   
    printf("Enter principal amount:\n");
    scanf("%d",&p);
    printf("Enter time:\n");
    scanf("%d",&t);
     simple_intrest=p*t*r/100;
    printf("simple intrest:%d \n",simple_intrest);
    
    return 0;
}