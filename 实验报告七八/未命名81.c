#include <stdio.h>
int main() 
{
    int a[9] ={1, 2, 3, 4, 5, 6, 7, 8, 9}; //一维数组初始化
    int b[3][3];//二维数组定义
	//按行填充二维数组
    int i,j;
	for (i = 0; i < 9; i++) 
	{
        b[i / 3][i % 3] = a[i]; //行索引i/3，列索引i%3
    }//输出二维数组
    printf("二维数组输出：\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            printf("%d ", b[i][j]);
        }
        printf("\n"); //每行结束换行
    } 
    
    return 0;
}
