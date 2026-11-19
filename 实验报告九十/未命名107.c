#include <stdio.h>
// 指针遍历字符串统计长度（直到'\0'）
int strLength(const char *str) { // const保护字符串不被修改
    int len = 0;
    while (*str != '\0') { //解引用判断结束符
        len++;
        str++; //指针后移
    }
    return len;
}
int main() {
    char str[] = "Hello";
    int len = strLength(str);
    printf("字符串\"%s\"的长度：%d\n", str, len);
    return 0;
}
