#include <stdio.h>
int main() {
    int n,i;
    long a,sum=0;
	//long存储较大的阶乘值
    for(n=1;n<=10;n++) {    
	//1到10
        a=1;             
		//当前数的阶乘为1
        for(i=1;i<=n;i++) {  
		//计算n的阶乘
            a*=i;
        }
        sum+=a;          
		//累加阶乘到sum
    }
    printf("sum=%lld\n",sum);   
	//输出结果
    return 0;
}
