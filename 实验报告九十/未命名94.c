#include <stdio.h>
// 斐波那契第k项（避免递归重复计算）
int fib(int k) 
{
    if (k <= 2) return 1;
    int a = 1, b = 1, c,i;
    for (i = 3; i <= k; i++) 
	{
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main() 
{
    int n = 20, sum = 0,i;
    for ( i = 1; i <= n; i++) 
	{
        sum += fib(i);
    }
    printf("前20项和：%d，平均值：%.2f\n", sum, sum * 1.0 / n);//20项和17710，平均值885.50
    return 0;
}
