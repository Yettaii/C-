#include <stdio.h>
int main() {
    int arr[20] = {0, 1, 1}; //初始化前三项
    int i;
    for (i = 3; i < 20; i++) 
	{
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3]; //前三项之和递推
    }
    printf("数列前20项: ");
    for (i = 0; i < 20; i++) 
	{
        printf("%d ", arr[i]);
    }
    return 0;
}
