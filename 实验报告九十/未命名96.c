#include <stdio.h>
#include <string.h>
int countDigits(char ch[]) 
{
    int count = 0,i;
    for ( i = 0; i < strlen(ch); i++) 
	{
        if (ch[i] >= '0' && ch[i] <= '9') 
		{ //判断数字字符
            count++;
        }
    }
    return count;
}
int main() {
    char ch[] = "SD234.6FGtt5"; //数字个数为5
    printf("数字字符个数：%d\n", countDigits(ch));//结果：5
    //遍历字符串，逐字符判断，时间复杂度O(n)。
    return 0;
}
