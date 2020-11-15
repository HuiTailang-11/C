#include<stdio.h>
int main() {
    char x;
    char input;
    printf("Pleas enter a character: \n");
    
    while (input != '0'){
        input = scanf("%c",&x);
        printf("the code for %c is %d. \n", x, x);
    }
    
    return 0;
}