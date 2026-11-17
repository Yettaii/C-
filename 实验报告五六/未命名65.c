#include <stdio.h>

int main() {
    int i, term=0,s=0;
    for (i=1;i<=10;i++) {//假设前10项
        term+=i;//计算当前项（1+2+...+i）
        s+=term;//累加到s
    }
    printf("s=%d\n",s);//输出 
    return 0;
}
