#include<stdio.h>
int main()
{
	int a=200;
	int b=300;
	int c;//int temp=a;
	c=a;
	a=b; 
	b=c;//b=temp;
	printf("a=%d,b=%d",a,b);
	return 0;
	
}
