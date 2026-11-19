#include <stdio.h>
#include <time.h>  //包含时间处理函数
int main() {
    time_t now;                // 时间戳
    struct tm *tm_now;         // 分解后的时间结构体
    //获取当前系统时间
    time(&now);
    //转换为本地时间
    tm_now = localtime(&now);
    // 按“年/月/日”格式输出日期
    printf("系统日期：%d/%d/%d\n", 
           tm_now->tm_year + 1900,  //年份：tm_year是“1900年以来的年数”
           tm_now->tm_mon + 1,      //月份：tm_mon是0~11，需+1
           tm_now->tm_mday);        //日期：1~31
    //按"时:分:秒.XX"格式输出时间
    printf("系统时间：%d:%d:%d.00\n", 
           tm_now->tm_hour,   //小时：0~23
           tm_now->tm_min,    //分钟：0~59
           tm_now->tm_sec);   //秒：0~61
    return 0;
}
