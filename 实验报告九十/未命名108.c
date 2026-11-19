#include <stdio.h>
#include <string.h> // 用strncmp辅助比较
// 复用实验7的字符串长度函数
int strLength(const char *str) {
    int len = 0;
    while (*str++) len++;
    return len;
}
// 统计子串出现次数指针遍历主串逐段比较
int countSubstring(const char *str, const char *sub) {
    int count = 0;
    int sub_len = strLength(sub);
    if (sub_len == 0) return 0; //子串为空返回0
    while (*str != '\0') {
        // 比较当前位置开始的sub_len长度的字符串
        if (strncmp(str, sub, sub_len) == 0) {
            count++;
            str += sub_len; //跳过已匹配的子串（处理重叠）
        } else {
            str++; //否则指针后移1位
        }
    }
    return count;
}
int main() {
    char str[] = "ababa";
    char sub[] = "aba";
    int cnt = countSubstring(str, sub);
    printf("子串\"%s\"出现次数：%d\n", sub, cnt);  
    return 0;
}
