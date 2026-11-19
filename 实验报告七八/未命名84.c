#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int m = 3, n = 2; //3行2列矩阵
    int matrix[m][n];
    int i,j;
    srand(time(0)); //随机种子初始化
	//生成随机矩阵（0~9）
    printf("随机矩阵：\n");
    for (i = 0; i < m; i++) 
	{
        int sum = 0; // 每行和
        for (j = 0; j < n; j++) 
		{
            matrix[i][j] = rand() % 10;
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("%d\n", sum); // 输出行和作为新列
    }
    return 0;
}
