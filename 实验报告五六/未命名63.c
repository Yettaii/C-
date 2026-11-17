#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 1; i <= 4; i++) { // 共4行
        for (j = 1; j <= 4 - i; j++) { // 输出前导空格
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) { // 输出数字
            if (k <= i) {
                printf("%d", k); // 递增
            } else {
                printf("%d", 2 * i - k); // 递减
            }
        }
        printf("\n");
    }
    return 0;
}
