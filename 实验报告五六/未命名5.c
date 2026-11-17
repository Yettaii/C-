#include <stdio.h>
int main() {
    int a = 1, b = 1;
	//前两项初始化为1
    int i;
    printf("1 1"); 
	//输出前两项
    for (i=3;i<=20;i++){
	//循环从第3项到第20项
        int c=a+b; //计算当前项
        printf(" %d ",c); // 输出当前项
        a=b;//更新a为前一项
        b=c;//更新b为当前项
    }
    printf("\n");
    return 0;
}
