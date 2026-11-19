#include <stdio.h>
int main() {
    // 字符指针数组：每个元素指向字符串字面量
    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };
    int num;
    printf("输入1~12的整数：");
    scanf("%d", &num);
    if (num >= 1 && num <= 12) {
        // 数组索引从0开始，故num-1
        printf("对应月份：%s\n", months[num - 1]);
    } else {
        printf("输入错误！\n");
    }  
    return 0;
}
