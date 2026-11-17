#include<stdio.h>
int main()
{
	
	/*if语句一般表达形式
	if(表达式）语句；
	*/
	int a;
	  scanf("%d",&a);
    if (a>10)
	  printf("a的值大于10\n");
    else if(a==10)	 //if,else嵌套采取就近原则，多用于 多分支 
	  printf("a的值等于10\n");
	else
	  printf("a的值小于10\n");
	 return 0;
	
	 
}  
