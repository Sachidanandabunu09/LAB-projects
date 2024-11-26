#include <stdio.h>

int main(){
    int maths,physics,chemistry,entrance_test,cutoff_marks;
    printf("Enter marks in maths:\n");
    scanf("%d",&maths);
    printf("Enter marks in physics:\n");
    scanf("%d",&physics);
    printf("Enter marks in chemistry:\n");
    scanf("%d",&chemistry);
    printf("Enter marks in entrance test:\n");
    scanf("%d",&entrance_test);
    cutoff_marks=(maths/2)+(physics/2)+(chemistry/2)+entrance_test;
    printf("Your cut off marks is:%d\n", cutoff_marks);
    

    return 0;
}