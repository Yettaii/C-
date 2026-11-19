#include <stdio.h>
#define SIZE 10
// 选择法降序：指针遍历数组，每次选最大值交换
void selectSort(int *arr) {
	int i,j;
    for ( i = 0; i < SIZE - 1; i++) {
        int max_idx = i; // 假设当前i是最大值索引
        // 指针遍历找最大值：arr+j 等价于 &arr[j]
        for (j = i + 1; j < SIZE; j++) {
            if (*(arr + j) > *(arr + max_idx)) { //解引用比较
                max_idx = j;
            }
        }
        // 交换当前i和max_idx的元素
        if (max_idx != i) {
            int temp = *(arr + i);
            *(arr + i) = *(arr + max_idx);
            *(arr + max_idx) = temp;
        }
    }
}
int main() {
    int arr[SIZE] = {5, 3, 8, 1, 9, 2, 7, 4, 6, 0};
    int i;
    printf("排序前：");
    for (i = 0; i < SIZE; i++) { printf("%d ", arr[i]); }
    printf("\n");
    selectSort(arr); // 传数组首地址
    printf("降序后：");
    for (i = 0; i < SIZE; i++) { printf("%d ", arr[i]); }
    printf("\n"); 
    return 0;
}
