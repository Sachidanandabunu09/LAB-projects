#include <stdio.h>

int main(){
    int s1,s2,s3,s4,s5, total_marks;
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
    total_marks=s1+s2+s3+s4+s5;
    if(total_marks<='500'&&total_marks>='450'){
        printf("Congratulations you are awarded A grade");
    }
    else if (total_marks<='449'&&total_marks>='380'){
        printf("You are awarded B grade");
    }
    else if (total_marks<='379'&&total_marks>='300'){
        printf("You are awarded C grade");
    }
    else if (total_marks<=299){
        printf("You are awarded D grade");
    }
    return 0;
}