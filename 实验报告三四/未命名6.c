#include<stdio.h>
int main()
{
	char a,b,c;
	a=getchar();//读取第一个字符 
	b=getchar();//读取第二个字符 
	c=getchar();//读取第三个字符 
	//用getchar输入字符abc 
 
	if(a>='A'&&a<='Z') a +=32;
	if(b>='A'&&b<='Z') b +=32;
	if(c>='A'&&c<='Z') c +=32;
	//判断abc是否为大写字母，如果是将大写字母ASCII码+32转为小写字母ASCII码 
	putchar(a);
	putchar(b);
	putchar(c);
	//用putchar输出转化后的小写字母abc 
	return 0;
}
