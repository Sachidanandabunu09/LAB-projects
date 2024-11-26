/*
10000
01000
00100
00010
00001
*/
#include <stdio.h>

int main(){
    int rows;
    printf("Enter number of rows :\n");
    scanf("%d",&rows);
    for (int i = 1; i <=rows; i++)
    {
       for (int j =1; j <=i; j++)
       {
        if (j==i)
        {
            printf("1");
            for(int x = 1;x<=5-i;x++){
                printf("0");
            }
            
        }
        else{
            printf("0");
        }
        
       }
       printf("\n");
       
    }
    
    return 0;
}