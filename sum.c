/*26. PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W  1 TO N. */
#include <stdio.h>

int main(){
    int n,oddsum=0, evensum=0;
    printf("Enter n :\n");
    scanf("%d",&n);
    if(n%2!=0){
        for (int i = 1; i <= n; i=i+2)
        {
            oddsum=oddsum+i;
           
        }
         printf("The sum of all odd is numbers between 1 to n is :%d",oddsum);
       printf("\n");
    }
    else
    {
                for (int i = 1; i <n; i=i+2)
        {
            oddsum=oddsum+i;
            
        }
        printf("The sum of all odd is numbers between 1 to n is :%d",oddsum);
        printf("\n");
        
    }
     if(n%2!=0){
        for (int i = 0; i <= n; i=i+2)
        {
            evensum=evensum+i;
            
        }
         printf("The sum of all even is numbers between 1 to n is :%d\n",evensum);
         printf("\n");
    }
    else
    {
                for (int i = 0; i<n; i=i+2)
        {
            evensum=evensum+i;      }
        printf("The sum of all even is numbers between 1 to n is :%d\n",evensum);
        printf("\n");
        
    }

    return 0;
} 