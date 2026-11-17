#include<stdio.h>
int main()
{
float a,b,c,d,e,sum;
//定义五个变量和和 
printf("请输入五个数：");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
//输入五个数 
sum=a*a+b*b+c*c+d*d+e*e;
//计算平方和 
printf("五个数的平方和为：%.2f",sum);
//输出（小数点后两位 
return 0;
}
