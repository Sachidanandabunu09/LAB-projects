#include <stdio.h>

int main(){
    int num,rem,temp;
    num=12345;
    temp=0;
    while (num!=0)
    {
        rem=num%10;
        temp=temp*10+rem;
        num=num/10;
    
    }
    
    printf("%d",temp);
    
    return 0;
}
