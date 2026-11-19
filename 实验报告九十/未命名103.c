#include <stdio.h>
//通过地址交换原变量值
void swap(int *a, int *b) {
    int temp = *a; //解引用读值
    *a = *b;       //解引用写值
    *b = temp;
}
int main() {
    int x = 10, y = 20;
    printf("交换前：x=%d, y=%d\n", x, y);
    swap(&x, &y); // 传地址
    printf("交换后：x=%d, y=%d\n", x, y);//换前：10 20 → 交换后：20 10    
    return 0;
}
