#include <stdio.h>
int main() {
    int n = 4;//方阵大小
    int i,j;
    printf("4×4数字方阵：\n");
    for (i = 1; i <= n; i++) 
	{ //行循环
        for (j = 1; j <= n; j++) 
		{ //列循环，每行输出1~n
            printf("%d ", j);
        }
        printf("\n"); // 每行结束换行
    }
    return 0;
}
