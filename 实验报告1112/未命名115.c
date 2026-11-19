#include <stdio.h>
// 定义学生结构体
struct Student {
    long id;      //学号
    char name[50];//姓名
    char gender[10];//性别
    int age;       //年龄
};
int main() {
    //赋值初始化3个学生
    struct Student stu1 = {1001, "张三", "男", 20};
    struct Student stu2 = {1002, "李四", "女", 19};
    struct Student stu3 = {1003, "王五", "男", 21};
    //输出信息
    printf("=== 学生信息（直接赋值） ===\n");
    printf("学生1：学号%ld，姓名%s，性别%s，年龄%d\n", 
           stu1.id, stu1.name, stu1.gender, stu1.age);
    printf("学生2：学号%ld，姓名%s，性别%s，年龄%d\n", 
           stu2.id, stu2.name, stu2.gender, stu2.age);
    printf("学生3：学号%ld，姓名%s，性别%s，年龄%d\n", 
           stu3.id, stu3.name, stu3.gender, stu3.age);
    return 0;
}
