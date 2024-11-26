#include <stdio.h>

int main(){
    int num,rem,sum;
    num=12345;
    sum=0;
    while (num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;

    }
    printf("the sum of digits is %d",sum);
    
    
    return 0;
}