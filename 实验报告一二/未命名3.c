#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,sum;
	//定义变量 
	printf("请输入三个数：");
	scanf("%f%f%f",&a,&b,&c);
	//输入三个数 
	sum=sqrt(a)+sqrt(b)+sqrt(c);
	//求平方根的和 
	printf("三个数的平方根的和为：%.2f",sum);
	//输出 
	
	return 0;
}
