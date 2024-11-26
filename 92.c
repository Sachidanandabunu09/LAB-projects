// ).WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS. 
 #include <stdio.h>
 
 int main(){
    int num[100],n,largest,*ptr;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Enter the list of numbers :\n");
    ptr=num;
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d",(ptr+i));
    }
    
    largest=*ptr;

    for (int j = 1; j < n; j++)
    {
        if(num[j]>largest){
            largest=num[j];
        }
    }
    printf("The largest number of the list is %d",largest);
    
    
    return 0;
 }