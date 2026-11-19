#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
	{ // 冒泡排序核心逻辑
        for (j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] < arr[j + 1]) 
			{ // 相邻元素比较交换
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() 
{
    int arr[10], i;
    srand(time(0));
    printf("排序前: ");
    for (i = 0; i < 10; i++) {
        arr[i] = rand() % 50; // 生成0-49的数
        printf("%d ", arr[i]);
    }
	sort(arr, 10); // 调用简单排序函数
    printf("\n排序后: ");
    for (i = 0; i < 10; i++) 
	{
        printf("%d ", arr[i]);
    }
    return 0;
}
