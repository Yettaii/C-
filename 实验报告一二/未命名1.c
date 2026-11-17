#include<stdio.h>
#define PI 3.14159
int main()
{
	float r=2.456,S,C;
	//将圆的半径赋值，定义周长和面积变量 
	S=PI*r*r;
	//计算面积 
	C=2*PI*r;
	//计算周长 
	printf("圆的周长为%f,圆的面积为%f",C,S);
	//输出周长面积 
	return 0;
	
}
