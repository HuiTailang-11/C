#include <stdio.h>
int main(void){
    int i,  *p = &i;
    i = 60;
    // printf (p);
    printf (*p);
    return 0;
};