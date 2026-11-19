#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int arr[20], i;
    srand(time(0));
    for (i = 0; i < 20; i++) {//循环 
        arr[i] = rand() % 100; // 生成0-99的数
    }
    printf("数组元素:\n");
    for (i = 0; i < 20; i++) 
	{
        printf("%d ", arr[i]);
        if ((i + 1) % 5 == 0) 
		printf("\n"); // 利用取余控制换行
   
    return 0;
}
