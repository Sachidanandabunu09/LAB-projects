#include <stdio.h>

int main(){
    int n,factorial=1;
    printf("Enter the number :");
    scanf("%d",&n);
    if (n<0)
    {
        printf("factorial of negtive number doesnt exists");

    }
    else{
    
    for (int i =1; i <= n; i++)
    {   

        factorial*=i;
        
    }printf("The factorial of %d is %d:\n",n , factorial);
    }
    return 0;
}