#include <stdio.h>

int main(){
    int s1,s2,s3,s4,s5,total_percentage=0;
    printf ("Enter you marks in s1:\n");
    scanf("%d",&s1);
    printf ("Enter you marks in s2:\n");
    scanf("%d",&s2);
    printf ("Enter you marks in s3:\n");
    scanf("%d",&s3);
    printf ("Enter you marks in s4:\n");
    scanf("%d",&s4);
    printf ("Enter you marks in s5:\n");
    scanf("%d",&s5);
    total_percentage=((s1+s2+s3+s4+s5)/5);
    printf("Your total percentage is %d:",total_percentage);
    return 0;
}