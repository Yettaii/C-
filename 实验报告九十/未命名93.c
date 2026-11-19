#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int num) 
{
    if (num < 0) return false; //负数非回文
    int original = num, reverse = 0;
    while (num > 0) 
	{
        reverse = reverse * 10 + num % 10; //反转
        num /=10;
    }
    return original == reverse;
}
int main() 
{
    int num = 121; //121是回文，123不是
    printf("%d %s回文数\n", num, isPalindrome(num) ? "是" : "不是");
    //结果：121是回文数
    //处理了负数边界。
    return 0;
}
