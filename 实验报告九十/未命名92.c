#include <stdio.h>
//计算单个阶乘
int fact(int k) 
{
    int res = 1;
    int i;
    for (i = 1; i <= k; i++) 
	{
        res *= i;
    }
    return res;
}
int main() 
{
    int sum = 0;
    int k;
    for (k = 1; k <= 10; k++) 
	{
        sum += fact(k);
    }
    printf("1!+2!+...+10! = %d\n", sum);//4037913
    //累加10个阶乘，int范围足够（10! = 3628800，总和<2^31）。
    return 0;
}
