#include <stdio.h>
// 声明一个函数
void br(void);
void ic(void);
int main() {
    br();
    ic();
    return 0;
}
void ic(void){
    printf("India, China \n");
}
void br(void){
    printf("Brazil,Russia \n");
}
