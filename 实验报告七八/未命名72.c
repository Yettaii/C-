#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int scores[20], i;
    int count[5] = {0}; //初始化各分数段计数为0
	srand(time(0));
	printf("学生成绩: ");
    for (i = 0; i < 20; i++) 
	{
        scores[i] = rand() % 101; // 生成0-100的成绩
        printf("%d ", scores[i]);
        if (scores[i] < 60) count[0]++;
        else if (scores[i] < 70) count[1]++;
        else if (scores[i] < 80) count[2]++;
        else if (scores[i] < 90) count[3]++;
        else count[4]++; // 简单的条件判断统计
    }
	printf("\n0-59: %d人\n", count[0]);
    printf("60-69: %d人\n", count[1]);
    printf("70-79: %d人\n", count[2]);
    printf("80-89: %d人\n", count[3]);
    printf("90-100: %d人\n", count[4]);

    return 0;
}
