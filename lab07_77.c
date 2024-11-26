// 77) WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT. 
#include <stdio.h>
int Pallindrome_or_not(int number);

int main(){
    int n;
    printf("Enter your number:\n");
    scanf("%d",&n);
   if(Pallindrome_or_not(n)){
    printf("The number is a pallindrome\n");
   }
   else{
    printf("The number is not pallindrome\n");
   }
    return 0;
    }

int Pallindrome_or_not(int number){
    int rev,x;
    rev=0;
    x=number;
    while(x!=0){
        rev=rev*10+x%10;
        x=x/10;
    }
    if(rev==number){
        return 1;
    }
    else{
        return 0;
    }
}

    
