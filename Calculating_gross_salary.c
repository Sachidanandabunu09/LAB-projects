#include <stdio.h>

int main(){
    float basic_salary, hra,DA,Transport_allowance,Medical_allowance,Gross_salary;
    printf("Enter your basic salary:\n");
    scanf("%f",&basic_salary);
    hra= 0.20*basic_salary;
    Transport_allowance= 0.10*basic_salary;
    Medical_allowance= 5000;
    DA= 3000;
    Gross_salary=hra+DA+Transport_allowance+basic_salary+Medical_allowance;
    printf("Your Gross salary is %d\n",Gross_salary);
    return 0;
}