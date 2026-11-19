#include <stdio.h>
//计算阶乘（递归或循环均可，此处用循环提高效率）
long long fact(int n) 
{
    long long res = 1;
    int i,m;
    for (i = 1; i <= n; i++) 
	{
        res*= i;
    }
    return res;
}// 计算组合数
long long combine(int n, int m) 
{
    if (m < 0 || m > n) return 0; //非法输入处理
    return fact(n) / (fact(m) * fact(n - m));
}
int main() 
{
    int n = 5, m = 2; //C(5,2)=10
    printf("C(%d, %d) = %lld\n", n, m, combine(n, m));//结果：C(5, 2) = 10
    //阶乘计算正确，组合数公式无溢出（n≤20时long long可容纳）。
    return 0;
}
