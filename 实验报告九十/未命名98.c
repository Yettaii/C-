#include <stdio.h>
#include <math.h>
// 解二次方程，x1和x2通过指针返回，返回根的个数
int solve(double a, double b, double c, double *x1, double *x2) {
    if (a == 0) { //一次方程
        if (b == 0) return c == 0 ? -1 : 0; //恒等/无解
        *x1 = -c / b;
        return 1;
    }
    double d = b * b - 4 * a * c;
    if (d > 0) { //两实根
        *x1 = (-b + sqrt(d)) / (2 * a);
        *x2 = (-b - sqrt(d)) / (2 * a);
        return 2;
    } else if (d == 0) { //重根
        *x1 = *x2 = -b / (2 * a);
        return 1;
    } else { //虚根（实部+虚部）
        *x1 = -b / (2 * a);
        *x2 = sqrt(-d) / (2 * a);
        return 0;
    }
}
int main() {
    double a = 1, b = 2, c = 1, x1, x2; //重根x=-1
    int roots = solve(a, b, c, &x1, &x2);
    if (roots == 2) {
        printf("两实根：%.2f, %.2f\n", x1, x2);
    } else if (roots == 1) {
        printf("重根：%.2f\n", x1);
    } else if (roots == 0) {
        printf("虚根：%.2f±%.2fi\n", x1, x2);
    }//重根：-1.00
    return 0;
}
