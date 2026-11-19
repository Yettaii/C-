#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int m = 2, n = 3;
    int matrix[m][n];
    int i,j;
    srand(time(0));
    //生成随机矩阵
    for (i = 0; i < m; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            matrix[i][j] = rand() % 20; //0~19随机数
        }
    }
    int max = matrix[0][0], row = 0, col = 0;//遍历找最大值
    for (i = 0; i < m; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            if (matrix[i][j] > max) 
			{
                max = matrix[i][j];
                row = i;
                col = j;
            }
        }
    }// 输出矩阵和结果
    printf("矩阵：\n");
    for (i = 0; i < m; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("最大值：%d，行：%d，列：%d\n", max, row, col);
    return 0;
}
