#include<stdio.h>
int main()
{
float a,b;
//定义两个浮点型 
printf("请输入华氏温度：");
scanf("%f",&a);
//输入华氏温度 
b=5.0/9*(a-32);
//根据题目计算摄氏度 
printf("摄氏温度为%.2f",b);
//输出 
return 0; 
	 
}
