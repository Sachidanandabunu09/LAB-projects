//  WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY 
// X AND Y . 
/*#include <stdio.h>

int swap(int A,int B);


int main(){
    int a,b;
   printf("Enter a and b:\n");
   scanf("%d %d",&a,&b);
   swap(a,b);
   printf("The value of a is %d and the value of b is %d",a,b);
    return 0;
}
int swap(int A, int B){
    int c;
    c=A;
    A=B;
    B=c;
}
The issue in your program lies in how the swap function 
is defined and used. In C, when you pass variables to a function, 
they are passed by value, meaning the function receives a copy of the variables.
 Thus, any changes made to A and B in the swap function do not affect the original a and b in main.
*/

#include <stdio.h>

int swap(int *A, int *B); 

int main() {
    int a, b;
    printf("Enter a and b:\n");
    scanf("%d %d", &a, &b);
    
    swap(&a, &b);
    printf("The value of a is %d and the value of b is %d\n", a, b);
    
    return 0;
}

int swap(int *A, int *B) {
    int c;
    c = *A; // Dereference to get the value
    *A = *B; // Swap values using dereferencing
    *B = c;
}
