#include <stdio.h>
// 欧几里得算法求GCD
int gcd(int a, int b) 
{
    while (b != 0) 
	{
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// LCM = a*b / GCD（需保证a*b不溢出）
int lcm(int a, int b) 
{
    return a * b / gcd(a, b);
}

int main() 
{
    int a = 12, b = 18; //GCD=6，LCM=36
    printf("GCD：%d，LCM：%d\n", gcd(a, b), lcm(a, b));//结果：GCD：6，LCM：36
    //LCM公式正确。
    return 0;
}
