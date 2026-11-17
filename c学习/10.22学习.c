#include <stdio.h>

//int a = 100; 
//初始化！
//名字相同局部>全局（但不建议
 
int main()
{
	int num1 = 0;
	int num2 = 0;
	//输入两个整数 
	//空格隔开，&！！ 
	scanf("%d %d",&num1,&num2);
	//求和
	//%d十进制输入
	 
	int sum = num1 + num2;
	//输出 
	printf("总数=%d\n", sum);
	
	return 0;
}

















