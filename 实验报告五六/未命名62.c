#include <stdio.h>
int main() {
    int i,j;
    for (i=1;i<=9;i++){ 
	//外层循环，控制行数
        for (j=1;j<=i;j++) { 
		//内层循环，控制列数
            printf("%d*%d=%-4d", j, i, i * j); // 输出左对齐
        }
        printf("\n");
		//换行
    }
    return 0;
}
