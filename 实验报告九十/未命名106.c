#include <stdio.h>
#define MAX_LEN 100
int main() {
    char str[MAX_LEN];
    char *p = str; // 指针指向数组首地址
    printf("输入字符串（回车结束）：");//逐个字符读取，直到换行符或数组满
    while ((*p = getchar()) != '\n' && p < str + MAX_LEN - 1) 
	{
        p++; //指针后移，准备存下一个字符
    }
    *p = '\0'; //手动添加字符串结束符
    printf("你输入的字符串：%s\n", str);
    return 0;
}
