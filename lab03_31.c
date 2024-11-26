//PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO. 
#include <stdio.h>

int main(){
    int n,sum=0,rem;
    printf("Enter number:\n");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The sum of the digits of number is %d\n",sum);
    
    return 0;
}