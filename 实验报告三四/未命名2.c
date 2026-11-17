#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	//用scanf函数输入abc且用空格分隔 
	int x1=a+b+c;
	//计算abc之和 
	int x2=a-b-c;
	//计算a-b-c的值 
	printf("x1=a+b+c= %d+ %d+ %d=%d\n",a,b,c,x1);
	//输出x1的计算过程和最终结果x1 
	printf("x2=a-b-c= %d- %d- %d=%d\n",a,b,c,x2);
	//输出x2的计算过程和最终值x2 
	return 0;
}
