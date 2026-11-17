#include<stdio.h>
int main()
{
	int a=2;
	a+=a;
	//a=4
	a-=2;
	//a=2
	a*=2+3;
	//a=10
	a/=a+a;
	//a=10/20  为0 
	printf("a的值为：%d",a);
	//输出a最终值 
	return 0;
 } 
