#include <stdio.h>
int main() {
    int arr[] = {67, 89, 76, 98, 66};//定义数组 
    int n = 5, i, temp;//定义变量 
    printf("反序前: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);//输出反序前 
    }
    for (i = 0; i < n / 2; i++) 
	{ //对称位置交换
        temp = arr[i];//定义中间变量，将数组值放入 
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("\n反序后: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);//输出反序后 
    }
    return 0;
}
