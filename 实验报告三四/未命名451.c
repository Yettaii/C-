#include <stdio.h>//头文件
#include <math.h>//数学函数头文件，用于sqrt平方根函数
int main() {
//主函数入口
    float a,b,c,d,e,f;//abc为系数d为判别式ef为复根的实部虚部
    printf("输入a,b,c:");//提示输入a、b、c
    scanf("%f%f%f",&a,&b,&c);//读取系数abc 
    if (a==0){
//1.判断a是否为0（不是二次方程）
        if (b==0) {
	//a=0且b=0（系数全为0）
            if (c==0) {
			//c也为0方程变为0=0
                printf("方程恒成立\n");//输出
            } else {        
			//c不为0无解（非方程）
                printf("不是方程\n");//输出
            }
        } else {            
	//a=0b不为0方程变为bx+c=0
            printf("方程的根为:%.2f\n",-c/b);//计算一次方程的根并保留两位小数
        }
    } else {                
//2.a不为0（二次方程ax2+bx+c=0） 
        d=b*b-4*a*c;//计算判别式
        if (d==0) {       
		//d=0时，有两个相等的实根，根为-b/(2a)
            printf("有两个相等实根:%.2f\n",-b/(2*a)); 
			//输出重根并保留两位小数
        } else if (d>0) { 
		//d>0时，有两个不等的实根，根为[-b±√d]/(2a)
            printf("有两个不等实根:%.2f和%.2f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
			//输出两个实根
        } else {            
		//d<0时有两个共轭复根
            e=-b/(2*a);//计算实部
            f=sqrt(-d)/(2*a);//计算虚部
            printf("共轭复根为:%.2f+%.2fi和%.2f-%.2fi\n",e,f,e,f);//输出共轭复根
        }
    }
    
	return 0;//程序正常结束
}
