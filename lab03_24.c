/*WRITE A C PROGRAM TO FIND THE VALUE OF Y USING  
     1+x               where n=1 
    1+x/n          where n=2 
Y(x,n)  =    1  +xn             when  n=3 
   1 + nx           when n>3 or n<1 */
#include <stdio.h>

int main(){
    int x,n,Y;
    printf("Enter n :\n");
    scanf("%d",&n);
    printf("Enter x :\n");
    scanf("%d",&x);
    if (n=1)
    {
        Y=1+x;
        printf("The vale  of Y is %d",Y);

    }
    else if (n=2)
    {
        Y=(1+x)/n;
        printf("%d",Y);
        
    }
    else if (n=3)
    {
        Y=1+x^n;
        printf("The vale  of Y is %d",Y);

    }
    else if (n>3||n<1)
    {
        Y=1+n*x;
        printf("The vale  of Y is %d",Y);

    }
    
    
    
    
    return 0;
}