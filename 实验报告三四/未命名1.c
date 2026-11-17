#include<stdio.h>
int main()
{
	int a,b,c;
	//定义三个整型变量abc 
	float x,y,z;
	//定义三个浮点型变量xyz 
	scanf("%d",%a);
	scanf("%d",%b);
	scanf("%d",%c);
	//按指定要求scanf函数输入整型abc的值 
	scanf("%f",%x);
	scanf("%f",%y);
	scanf("%f",%z);
	//按指定要求scanf函数输入浮点型xyz的值 
	printf("a=%-7d b=%-7d c=%-7d\n",a,b,c);
	// 以 宽度为7输出abc，-使右侧补充空格 
	printf("x=%-7.3f y=%-7.3f z=%-7.3f",x,y,z);
	//以宽度为7，小数点后3为输出xyz，-使右侧补充空格 
	return 0;
 } 
