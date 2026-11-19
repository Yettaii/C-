#include <stdio.h>
// 指针排序：通过解引用交换变量值
void sort(int *a, int *b, int *c) {
    int temp; //确保a指向最小值
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*a > *c) { temp = *a; *a = *c; *c = temp; }//确保b <= c
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
}
int main() {
    int x, y, z;
    printf("输入三个整数（空格分隔）：");
    scanf("%d %d %d", &x, &y, &z);
    
    int *px = &x, *py = &y, *pz = &z; //指针指向变量
    sort(px, py, pz); // 传指针实现“引用传递”
    
    printf("从小到大：%d %d %d\n", *px, *py, *pz);
    //输入：3 1 2 → 输出：1 2 3  
    // 【分析】  
    // 1. 指针直接操作变量内存，实现“交换原变量值”（区别于值传递的临时拷贝）。  
    // 2. 排序逻辑通过解引用比较和交换，代码紧凑，体现指针对内存的直接控制。  
    // 3. 缺陷：仅支持3个数，可扩展为数组指针处理任意长度。  
    return 0;
}
