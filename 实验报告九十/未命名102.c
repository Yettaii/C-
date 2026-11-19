#include <stdio.h>
#define MAX_N 20
int main() {
    int n,i;
    printf("输入n（1~20）：");
    scanf("%d", &n);
    if (n < 1 || n > MAX_N) { printf("n范围错误！\n"); return 1; }
    float arr[MAX_N];
    float *p = arr; // 指针指向数组首元素（等价于 &arr[0]）
    // 输入数组：指针算术运算遍历（p+i 等价于 &arr[i]）
    printf("输入%d个浮点数：", n);
    for (i = 0; i < n; i++) { scanf("%f", p + i); }
    // 逆序：双指针交换首尾
    float *left = arr, *right = arr + n - 1;
    while (left < right) {
        float temp = *left;
        *left = *right; //解引用交换值
        *right = temp;
        left++;  //指针后移
        right--; //指针前移
    }
    //输出逆序结果
    printf("逆序后：");
    for (int i = 0; i < n; i++) { printf("%.2f ", *(arr + i)); }
    printf("\n");//输入n=3，数值1.2 3.4 5.6 → 输出：5.60 3.40 1.20  
    // 【分析】  
    // 1. 数组名是“常量指针”，通过指针算术运算（±n）灵活遍历数组。  
    // 2. 双指针法逆序，时间复杂度O(n)，空间复杂度O(1)（原地交换）。  
    // 3. 指针直接操作数组元素，避免数组拷贝，效率高。  
    return 0;
}
