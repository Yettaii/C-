#include <stdio.h>
#include <math.h>
double f(double x) 
{
    return sin(2 * x) + x;
}

//梯形法积分
double trapezoid(double a, double b, int n) 
{	int i;
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b)); //算一半
    for (i = 1; i < n; i++) {
        sum += f(a + i * h); //中间项累加
    }
    return sum * h;//乘步长
}
int main() 
{
    double a = 0, b = 3.14159;
    int n1 = 10, n2 = 20;
    printf("n=10时积分：%.3f\n", trapezoid(a, b, n1));
    printf("n=20时积分：%.3f\n", trapezoid(a, b, n2));
	//n=10≈4.935，n=20≈4.935（理论值π2/2≈4.9348）
    //n越大，精度越高，梯形法收敛到理论值。
    return 0;
}
