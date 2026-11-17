#include<stdio.h>
int main()
{
	int a,b,c,max;
	//定义abc三个整型和最大值max 
	printf("输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	//输入三个整数 
	max=a;
	//假设a是最大值 
	if(b>max) max=b;
	//a和b进行比较，若b大再将b赋给max 
	if(c>max) max=c;
	//再和c进行比较，若比max大则更新max 
	printf("最大数是：%d\n",max);
	//输出最大值	
	
	
	return 0;
}
