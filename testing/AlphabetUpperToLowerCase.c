#include <stdio.h>
#include <ctype.h>
void main(){
    char alphabet;
    printf("Enter an alphabet\n");
    scanf("%c", &alphabet);
    if (alphabet==tolower(alphabet))
    printf("The entered alphabet %c is already in lowercase",alphabet);
    else 
    printf("%c converted in lowercase is %c",alphabet,tolower(alphabet));
}