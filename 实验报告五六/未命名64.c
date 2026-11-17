#include <stdio.h>

int main() {
    int x,y,z;
    for (x=0; x<=20;x++) 
	{//鸡翁最多20只（100/5）
        for (y =0;y<=33;y++) 
		{//鸡母最多33只（100/3）
            z=100-x-y;//鸡雏数量
            if (z%3==0&&5*x+3*y+z/3==100) 
			{ //验证条件
                printf("鸡翁%d鸡母%d鸡雏%d\n",x,y,z);
            }
        }
    }
    return 0;
}
