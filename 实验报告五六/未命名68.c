#include <stdio.h>
#include <math.h> // 用于 sqrt 函数
int main() {
    int count = 0; // 记录找到的素数个数
    int i, is_prime, j; // 提前声明循环变量，而非在循环头部声明
  	for (i = 999; i >= 100 && count < 3; i--) 
	  {
        is_prime = 1; // 假设当前数 i 是素数，标记为 1
        for (j = 2; j * j <= i; j++) 
		{ // 检查 2 到√i 的因数
            if (i % j == 0) 
			{ // 若能被 j 整除，不是素数
                is_prime = 0; // 标记为 0
                break; // 跳出内层循环
            }
        }
        if (is_prime) 
		{ // 若仍为素数
            printf("%d\n", i); // 输出素数
            count++; // 素数个数加 1
        }
    }
    return 0;
}
