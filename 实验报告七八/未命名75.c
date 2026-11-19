#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int n = 10, arr[10], i, j, k = 0;
    int temp[10] = {0}; // 临时数组存储去重结果
    srand(time(0));
    printf("原始数组: ");
    for (i = 0; i < n; i++) 
	{
        arr[i] = rand() % 21 - 10; // 生成-10到10的数
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n; i++) 
	{
        int isDuplicate = 0;
        for (j = 0; j < k; j++) 
		{
            if (arr[i] == temp[j]) 
			{ // 检查是否重复
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) 
		{
            temp[k++] = arr[i]; // 不重复则存入临时数组
        }
    }
    printf("\n去重后: ");
    for (i = 0; i < k; i++) 
	{
        printf("%d ", temp[i]);
    }
    return 0;
}
