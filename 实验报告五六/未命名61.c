#include <stdio.h>
int main() {
    int i,j;
    long a=1;
	//存储阶乘结果，long是防止溢出
    long s=0;
	//存储累加和
    for (i=1;i<=10;i++) { //外层循环1到10
        a=1; //每次重新计算阶乘前初始化
        for (j=1;j<=i;j++){//内层循环，计算i的阶乘
            a*=j;//阶乘计算
        }
        s+=a; //累加到s
    }
    printf("s=%ld\n",s); //输出结果
    return 0;
}
