#include <stdio.h>
int reversing_number(int n){
  int reverse=0;
    while (n!=0)
   {
    int rem=n%10;
    reverse=reverse*10+rem;
      n=n/10;
   }
   return reverse;
}

int main(){
    int n,rem,reverse=0;
    printf("Enter num:\n");
    scanf("%d",&n);
    
 
   printf("%d",reverse);
 
    return 0;
}