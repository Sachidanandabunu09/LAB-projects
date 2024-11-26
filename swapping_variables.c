#include <stdio.h>

int main(){
    int a,b,swap;
   printf("Enter a:");
   scanf("%d",&a);
   
   printf("Enter b:");
   
   scanf("%d",&b);
   swap=a;
   a=b;
   b=swap;

   printf("\n After swapping :");
   printf("a=%d",a);
   printf("b=%d",b);
    return 0;
}