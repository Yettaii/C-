#include <stdio.h>
int main()
{
    int d=0,l=0,o=0;//初始化计数
    char a;
    int i;
    for (i=0;i<30;i++) { 
	//循环次读取字符
        printf("输入第%d个字符:",i+1);
        a=getchar(); //读取字符
        while (getchar()!='\n'); // 清除输入缓冲区的换行符
        //判断是否为数字（ASCII码 '0'~'9'）
        if (a>='0'&&a<='9'){
            d++;
        }
        //判断是否为字母（大写 'A'~'Z' 小写 'a'~'z'）
        else if((a>='A'&&a<='Z')||(a>='a'&&a<='z')){
            l++;
        }
        //其他字符
        else {
            o++;
        }
    }
    printf("数字个数:%d\n,字母个数:%d\n,其他字符个数:%d\n",d,l,o);
    return 0;
}
