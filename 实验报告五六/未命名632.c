#include <stdio.h>

int main() {
    int rows = 4; //总行数
    int i, space, j; //提前声明循环变量，避免在循环内声明
    
    for (i = 1; i <= rows; i++) { //每一行（i = 1 到 4）
        // 计算前导空格数：总行数 - 当前行号 = 4 - i
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // 输出符号：每行 2i - 1 个字符，按 *+ 交替排列
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j % 2 == 1) { //奇数位置输出 *
                printf("*");
            } 
			else { //偶数位置输出 +
                printf("+");
            }
        }
        printf("\n"); // 换行
    }
    return 0;
}
