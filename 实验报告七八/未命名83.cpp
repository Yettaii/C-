#include <stdio.h>
int main() {
    int n = 4; //方阵大小
    int matrix[n][n] ={0};//初始化全0
	//对角线（i==j）置1
	int i,j;
    for (i = 0; i < n; i++) 
	{
        matrix[i][i] = 1;
    }// 输出方阵
    printf("主对角线为1的方阵：\n");
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
