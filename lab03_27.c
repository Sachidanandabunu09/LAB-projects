/*PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT.*/
#include <stdio.h>

int main(){
    int n,prime=1;
    printf("Enter n:\n");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
       if (n%i==0)
       {
        prime=0;
       }
    }
    if(prime==1){
        printf("Your entered number is prime\n");
    }
    else{
         printf("Your entered number is composite\n");
    }
    
 
    return 0;
}