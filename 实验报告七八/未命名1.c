#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10], i;
    int max, min;
    float avg;
    int sum = 0;

    srand(time(0)); // 初始化随机数种子，仅用于生成随机数

    printf("数组元素: ");
    for (i = 0; i < 10; i++) {
        arr[i] = rand() % 51 + 50; // 生成50-100的数，rand是基础随机数函数
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    max = min = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) max = arr[i]; // 直接比较找最大值
        if (arr[i] < min) min = arr[i]; // 直接比较找最小值
    }
    avg = (float)sum / 10; // 计算平均值

    printf("\n最大值: %d\n", max);
    printf("最小值: %d\n", min);
    printf("平均值: %.2f\n", avg);

    return 0;
}
