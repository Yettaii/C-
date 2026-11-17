#include <stdio.h>
int main(){
    int i,s=0;//定义变量 
    for(i=1;i<=100;i++) {  
	//循环变量i从1递增到100
        s+=i;  
		//s加1到100的每个数
    }
    printf("s=%d\n",s);  
	//输出累加结果
    return 0;
}
