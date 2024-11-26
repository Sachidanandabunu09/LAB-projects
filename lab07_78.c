// 78) WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.
#include <stdio.h>
 
 int Armstrong_or_not(int num);
 
 
 int main(){
   int number;
   printf("Enter your number:\n");
   scanf("%d",&number);
   if(Armstrong_or_not(number)){
      printf("The number is armstrong number\n");
   }
   else{
      printf("The number is not armstrong number\n");
   }
    return 0;
 }

int Armstrong_or_not( int num){
   int remainder,result=0,original_num;
   original_num=num;
 while (num > 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder; 
        num /= 10;
    }
if (original_num==result)
{
  return 1;
}
else{
   return 0;
}





}
