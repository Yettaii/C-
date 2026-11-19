#include <stdio.h>
#include <stdbool.h>
#include <math.h>
// 判断素数（优化：检查奇数和平方根）
bool isPrime(int num) {
	int i;
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}
// 计算素数和（处理n1>n2）
int sumPrimes(int n1, int n2) 
{
    if (n1 > n2) { int t = n1; n1 = n2; n2 = t; }
    int sum = 0,i;
    for ( i = n1; i <= n2; i++) {
        if (isPrime(i)) sum += i;
    }
    return sum;
}
int main() {
    int n1 = 2, n2 = 10; // 素数和2+3+5+7=17
    printf("素数和：%d\n", sumPrimes(n1, n2));//17
    //素数判断覆盖边界情况（如n1=1）。
    return 0;
}
