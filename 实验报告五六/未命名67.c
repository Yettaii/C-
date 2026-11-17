#include <stdio.h>
#include <math.h>
int main() {
    int n=0;
    double rate=1.1, target=4.0,result=1.0;//定义变量 
    while (result < target) 
	{//循环直到达到目标
        result*=rate;
        n++;
    }
    printf("需要%d年\n",n);
    return 0;
}
