#include<stdio.h>
int main()
{
int time;
  printf("此刻的时间(请输入1~24以内数字)是:");
  scanf("%d",&time);
if(time>=7&&time<=12)
  printf("现在是早上\n");
else if(time>12&&time<=18)
  printf("现在是下午\n");
else if(time>18&&time<=24)
  printf("现在是晚上\n");
else 
  printf("现在是凌晨\n");
return 0;
	

}
