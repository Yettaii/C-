#include <stdio.h>
#include <string.h>  //包含strcmp函数
//共用体：存储“班级”（学生）或“职务”（教师）
union Info {
    char class_num[20];  //学生班级
    char position[20];   //教师职务
};
//人员结构体含共用体
struct Person {
    char name[50];    //姓名
    long num;         //号码（学号/工号）
    char gender[10];  //性别
    char job[10];     //职业："学生"或"教师"
    union Info info;  //共用体成员
};
int main() {
    struct Person p;
    //输入基本信息
    printf("请输入人员信息（姓名 号码 性别 职业）：\n");
    scanf("%s %ld %s %s", p.name, &p.num, p.gender, p.job);
    //根据职业，输入共用体数据
    if (strcmp(p.job, "学生") == 0) {
        printf("请输入班级：");
        scanf("%s", p.info.class_num);
    } else if (strcmp(p.job, "教师") == 0) {
        printf("请输入职务：");
        scanf("%s", p.info.position);
    } else {
        printf("职业输入错误！请输入\"学生\"或\"教师\"。\n");
        return 1;  //非法输入，退出
    }
    //输出信息
    printf("\n=== 人员信息 ===\n");
    printf("姓名：%s，号码：%ld，性别：%s，职业：%s\n", 
           p.name, p.num, p.gender, p.job);
    if (strcmp(p.job, "学生") == 0) {
        printf("班级：%s\n", p.info.class_num);
    } else {
        printf("职务：%s\n", p.info.position);
    }
    return 0;
}
