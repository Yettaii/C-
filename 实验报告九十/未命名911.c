#include <stdio.h>
// 递归求斐波那契第k项
int fibRecur(int k) 
{
    if (k <= 2) return 1;
    return fibRecur(k - 1) + fibRecur(k - 2);
}
int main() {
    int n = 20, sum = 0,i;
    printf("前20项：");
    for (i = 1; i <= n; i++) {
        int val = fibRecur(i);
        printf("%d ", val);
        sum += val;
    }
    printf("\n和：%d\n", sum);//和17710（与迭代法一致）
    return 0;
}
