#include <stdio.h>
// 定义“日期”结构体（年、月、日）
struct Date {
    int year;  // 年份
    int month; // 月份
    int day;   // 日期
};
// 定义“学生”结构体（嵌套日期）
struct Student {
    long id;          // 学号
    char name[50];    // 姓名
    struct Date birth;// 出生年月
};
int main() {
	int i;
    struct Student stu[5];  // 存储5名学生
    // 输入5名学生信息
    for ( i = 0; i < 5; i++) {
        printf("请输入第%d名学生（学号 姓名 出生年 月 日）：\n", i+1);
        scanf("%ld %s %d %d %d", 
              &stu[i].id, stu[i].name, 
              &stu[i].birth.year, &stu[i].birth.month, &stu[i].birth.day);
    }
    // 输出：学号、姓名、年龄（2025 - 出生年）
    printf("\n=== 学生年龄汇总 ===\n");
    printf("学号\t姓名\t\t年龄\n");
    for ( i = 0; i < 5; i++) {
        int age = 2025 - stu[i].birth.year; // 计算年龄（题目当前年为2025）
        printf("%ld\t%s\t\t%d\n", stu[i].id, stu[i].name, age);
    }
    return 0;
}
