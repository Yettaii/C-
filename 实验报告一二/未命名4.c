#include<stdio.h>
#include<math.h>
#define PI 3.1416
//使用pi的值 
int main()
{
	float r,S,C;
	//定义三个变量 
	printf("请输入圆的半径：");
	scanf("%f",&r);
	//输入半径 
	S=PI*r*r;
	//计算面积 
	C=2*PI*r;
	//计算周长 
	printf("圆的面积为：%.2f，圆的周长为：%.2f",S,C);
	//输出面积周长（小数点后两位 
	
	return 0;
}
