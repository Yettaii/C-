#include <stdio.h>
#include <math.h>
int main() {
    double sum=0; 
	//初始化总和sum为0
    int n=1;
    double term;
	//定义term
    do {
        term=pow(-1,n-1)/(n*n+1.0);
		//计算通项
        sum+=term; 
		//加到sum上 
        n++;
		//让n自增
    } while (fabs(term)>=1e-5); //当绝对值>=1e-5时继续循环
    printf("sum=%lf\n",sum); //输出结果
    return 0;
}
