#include <stdio.h>

int main() {
    int x, y, z;
    for (x = 0; x <= 9; x++) 
	{//x循环 
        for (y = 0; y <= 9; y++) 
		{//y循环 
            for (z = 0; z <= 9; z++) 
			{//z循环 
                if (120 * x + 100 * y + 21 * z == 532)
				 {//三位数计算
                    printf("x=%d,y=%d,z=%d\n", x, y, z);
                }
            }
        }
    }
    return 0;
}
