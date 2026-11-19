#include <stdio.h>
// 定义学生结构体（含7门课、总分、平均分）
struct Student {
    long id;          //学号
    char name[50];    //姓名
    int age;          //年龄
    float score[7];   //7门课程成绩
    float total;      //总分
    float avg;        //平均分
};
int main() {
	int i,j;
    struct Student stu[3];  //存储3名学生
    //输入3名学生信息
    for ( i = 0; i < 3; i++) {
        printf("请输入第%d名学生（学号 姓名 年龄 课程1-7成绩）：\n", i+1);
        scanf("%ld %s %d", &stu[i].id, stu[i].name, &stu[i].age);
        float sum = 0;
        for (j = 0; j < 7; j++) {
            scanf("%f", &stu[i].score[j]);  // 输入7门课成绩
            sum += stu[i].score[j];         // 累加计算总分
        }
        stu[i].total = sum;      // 赋值总分
        stu[i].avg = sum / 7;    // 计算平均分
    }
    // 输出结果（学号、姓名、总分、平均分）
    printf("\n=== 学生成绩汇总 ===\n");
    printf("学号\t姓名\t\t总分\t\t平均分\n");
    for ( i = 0; i < 3; i++) {
        printf("%ld\t%s\t\t%.2f\t\t%.2f\n", 
               stu[i].id, stu[i].name, stu[i].total, stu[i].avg);
    }
    return 0;
}
