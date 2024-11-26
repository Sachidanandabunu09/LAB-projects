#include <stdio.h>

//programming using ladder conditional statement//
int main(){
    int marks=65;
    if (marks>=90)
    {
        printf("Congratulations you got A grade");
    }
    else if (marks>=80)
    {
        printf("you got B grade");
    }
    else if (marks>=60)
    {
        printf("You got C grade");
    }
    else if (marks>=50)
    {
        printf("You got D grade");
    }
    else if (marks>=0)
    {
        printf("You are failed");
    }
    return 0;
}