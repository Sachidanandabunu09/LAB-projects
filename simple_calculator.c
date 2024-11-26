#include <stdio.h>

int main(){
    char operator;
    float num1, num2;
    printf("Choose a opeator(+,-,*,/)\n");
    scanf(" %c", &operator); 
    printf("Enter num 1:\n");
     scanf("%f",&num2);
    printf("Enter num2 :\n");
   
    scanf("%f",&num1);
    
    switch (operator)
    {
    case '+':
        printf("%.2f+%.2f=%.2f", num1, num2,num1+num2);
        break;
    case'-':
    printf("%.2f-%.2f=%.2f", num1,num2,num1-num2);
    case '*':
    printf("%.2f*%.2f=%.2f", num1,num2,num1*num2);
    case'/':
    printf("%.2f/%.2f=%.2f", num1,num2,num1/num2);
    
    default:
    printf("Please enter a valid number");

        break;
    }

    return 0;
}