#include <stdio.h>

int main(){
     char ch;
     printf("Enter your character:\n");
     scanf("%c",&ch);
     if (ch>='A'&&ch<='Z'){
        printf("the character is uppercase\n");
     }
     else if (ch>='a'&&ch<='z'){
        printf("the character is lowercase\n");
     }
     else if (ch<='1'&&ch>='9'){
        printf("the charcter is a digit");

     }
     else {
        printf("The character is a special symbol");

     }
      return 0;
     }
   
