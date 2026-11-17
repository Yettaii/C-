#include<stdio.h>
//头文件 
int main()
//主函数开始 
{
	int score;//定义百分制分数 
	char grade;//定义转化后的等级 
	printf("请输入百分制成绩：");//提示输入成绩 
	scanf("%d",&score);
	//读取输入的成绩并存储到score的地址 
	if(score>=90&&score<=100){// 限定A等级的范围 
		grade='A';//将成绩划分为A等级 
		printf("该成绩等级为%c\n",grade);//输出 
	}else if(score>=80&&score<90){//限定B等级的范围 
		grade='B';//将成绩划分为B等级 
		printf("该成绩等级为%c\n",grade);//输出 
	}else if(score>=70&&score<80){//限定C等级的范围 
		grade='C';//将成绩划分为C等级 
		printf("该成绩等级为%c\n",grade);//输出 
	}else if(score>=60&&score<70){//限定D等级的范围 
		grade='D';//将成绩划分为D等级 
		printf("该成绩等级为%c\n",grade);//输出 
	}else if(score>=0&&score<60){//限定E等级范围 
		grade='E';//0-59划分为E 
		printf("该成绩等级为%c\n",grade);//输出 
	}else{
		printf("输入错误");//其余成绩新增错误提醒 
	}

		return 0;//程序正常结束 
}
