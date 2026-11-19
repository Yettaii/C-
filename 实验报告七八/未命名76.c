#include <stdio.h>
int main() {
    int n = 5, scores[5] = {85, 90, 78, 95, 88};//假设5个学生成绩
    int max,min,sum = 0;
    float avg;
    int count =0, i;
    max = min = scores[0];
    for (i = 0; i < n; i++) 
	{
        sum += scores[i];
        if (scores[i] > max) max = scores[i]; //遍历找最大值
        if (scores[i] < min) min = scores[i]; //遍历找最小值
    }
    avg = (float)sum / n;
    for (i = 0; i < n; i++) 
	{
        if (scores[i] > avg) count++; //统计高于平均值人数
    }
    printf("最高分: %d\n", max);
    printf("最低分: %d\n", min);
    printf("高于平均分人数: %d\n", count);
    return 0;
}
