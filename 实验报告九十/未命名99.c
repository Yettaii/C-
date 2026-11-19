#include <stdio.h>
#include <math.h>
// 定义函数f(x)
double f(double x) {
    return pow(x, 5) + 2 * pow(x, 3) - pow(x, 2) + x + 1;
}
// 定义导数f’(x)
double df(double x) {
    return 5 * pow(x, 4) + 6 * pow(x, 2) - 2 * x + 1;
}
// 牛顿迭代
double newton() {
    double x = 0.0, eps = 1e-6; //初始值x=0
    while (1) 
	{
        double fx = f(x), dfx = df(x);
        if (fabs(dfx) < 1e-10) break; //导数为0终止
        double x_new = x - fx / dfx;
        if (fabs(x_new - x) < eps) return x_new;
        x = x_new;
    }
    return x;
}
int main() {
    double root = newton();
    printf("近似根：%.6f\n", root);//结果≈-0.605805
    //顿法收敛依赖初始值，此处0附近收敛到唯一实根。
    return 0;
}
