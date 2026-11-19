#include <stdio.h>  
#include <stdlib.h>  
int main() {  
    FILE *fp;               //文件指针  
    char id[20], name[50];  //学号、姓名
    int eng, math, comp;    //三门课程成绩  
    double avg;             //平均成绩  

    //1.打开文件
    fp = fopen("students.txt", "r");  
    if (fp == NULL) {  
        printf("无法打开 students.txt！\n");  
        exit(1); // 异常退出  
    }  
    //2.逐行读取并计算平均成绩  
    while (fscanf(fp, "%s %s %d %d %d", id, name, &eng, &math, &comp) != EOF) {  
        avg = (eng + math + comp) / 3.0; //浮点运算避免整数除法  
        printf("学号：%s，姓名：%s，平均成绩：%.2f\n", id, name, avg);  
    }  
    //3.关闭文件  
    fclose(fp);  
    return 0;  
}  
