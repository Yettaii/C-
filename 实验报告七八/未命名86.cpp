#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int id;    //考号
    int score; //成绩
} Student;//降序排序比较函数
int compare(const void *a, const void *b) 
{
    return ((Student *)b)->score - ((Student *)a)->score;
}

int main() 
{
    int n = 5, m = 3; //5人，录取3人
    int i;
    Student students[n] = 
	{
        {1001, 80}, {1002, 95}, {1003, 85}, {1004, 90}, {1005, 88}
    };

    qsort(students, n, sizeof(Student), compare); // 降序排序

    int cutoff = students[m-1].score; // 第m名成绩（0-based）
    printf("录取分数线：%d\n", cutoff);
    printf("录取考生：\n");
    for (i = 0; i < m; i++) {
        printf("考号：%d，成绩：%d\n", students[i].id, students[i].score);
    }
    return 0;
}
