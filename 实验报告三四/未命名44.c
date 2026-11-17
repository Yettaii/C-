#include <stdio.h>//头文件
int main() { //主函数开始
    int num,count = 0;
	int digit1, digit2, digit3, digit4, digit5; 
	//num存储输入数，digit1,2,3,4,5存储各位数个十百千万,count记录位数
    printf("输入正整数:"); //提示输入一个正整数
    scanf("%d",&num); //读取整数存入num
//1.计算位数
    if (num>=10000) {//五位数（10000-99999）
        count=5;
    } else if (num>=1000) {//四位数（1000-9999）
        count=4;
    } else if (num>=100) {//三位数（100-999）
        count=3;
    } else if (num>=10) {//两位数（10-99）
        count=2;
    } else {//一位数（1-9）
        count=1;
    }
    printf("位数:%d\n",count); //输出位数
//2.输出各位数
   switch (count) {
        case 5: 
            digit5=num/10000;//万位：除以10000取整
            digit4=(num/1000)%10;//千位：先除以1000，再对10取余
            digit3=(num/100)%10;//百位：先除以100，再对10取余
            digit2=(num/10)%10;//十位：先除以10，再对10取余 
            digit1=num%10;//个位：对10取余
            printf("各位数字为:");//按个十百千万顺序输出
            printf("%d %d %d %d %d\n",digit1,digit2,digit3,digit4,digit5);
            printf("逆序为:");//逆序即按个十百千万顺序输出
            printf("%d%d%d%d%d\n",digit1,digit2,digit3,digit4,digit5);
            break;
     	case 4:
            digit4=num/1000;//千位 
            digit3=(num/100)%10;//百位
            digit2=(num/10)%10;//十位
            digit1=num%10;//个位
            printf("各位数字为:");
            printf("%d %d %d %d \n",digit1,digit2,digit3,digit4);//四位数字
            printf("逆序为:");
            printf("%d%d%d%d\n",digit1,digit2,digit3,digit4);
            break;
        case 3:
            digit3=num/100;//百位
            digit2=(num/10)%10;//十位
            digit1=num%10;//个位
            printf("各位数字为:");
            printf("%d %d %d \n",digit1,digit2,digit3);//三位数字
            printf("逆序为:");
            printf("%d%d%d\n",digit1,digit2,digit3);
            break;
        case 2:
            digit2=num/10;//十位 
            digit1=num%10;//个位
            printf("各位数字为:");
            printf("%d %d \n",digit1,digit2);//两位数字
            printf("逆序为:");
            printf("%d%d\n",digit1,digit2);
            break;
        case 1:
            digit1=num;
            printf("各位数字为:%d \n",digit1);//一位数字
            printf("逆序为:%d\n",digit1);
            break;
    }
   
    return 0;                // 程序正常退出
}
