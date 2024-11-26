#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z'){
    printf("'%c' is a lowercase letter.\n", ch);
   
    }
    else if(ch>='A'&& ch<='Z') {
        printf("'%c' is uppercase letter.\n",ch);
    }
    return 0;
}