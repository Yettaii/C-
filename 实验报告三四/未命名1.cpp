#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x,x1,x2,f,f1,f2;
	printf("请输入方程ax*x+bx=c=0的系数\n");
	scanf("%f %f %f",&a,&b,&c);
	if(a==0)
	  {
	  printf("这不是二次方程\nx=%.2f",-c/b);}
	else
	  {
	   f=b*b-4*a*c;
      
	  if(f==0)
	    {
		printf("方程有两个相等的实根\nx=%.2f",-b/(2*a));
	    }
	  else
	    {
		if(f<0)
	      {
		  
		  f1=sqrt(4*a*c-b*b);
		  printf("方程有两个共轭复根\nx1=%.2f+%.2fi,x2=%.2f-%.2fi",-b/(2*a),f1/(2*a),-b/(2*a),f1/(2*a));
     	  }
		else
		  {
		  	f2=sqrt(f);
		  x1=(-b+f2)/(2*a),x2=(-b-f2)/(2*a);
	    printf("方程有两个不相等的实根\nx1=%.2f,x2=%.2f",x1,x2);}
        }
   }
	return 0;
}
