#define _CRT_SECURE_NO_WARNINGS 1 //解决第49行代码scanf问题
#include <stdio.h>  //包含一个叫stdio.h的文件
//int num2 = 20;//全局变量
//int a=100;//全局变量

//int main()  //main前面的int表示main函数调用之后返回一个整型值
//{
	//printf("%d\n", sizeof(char));//字符数据类型
	//printf("%d\n", sizeof(short));//短整型
	//printf("%d\n", sizeof(int));//整型
	//printf("%d\n", sizeof(long));//长整型
	//printf("%d\n", sizeof(long long));//更长的整型
	//printf("%d\n", sizeof(float));//单精度浮点型
	//printf("%d\n", sizeof(double));//双精度浮点型
	
	//char ch = 'A';//字符数据类型
	//printf("%c\n", ch);//%c-打印字符格式的类型

	//int age = 20;//int---整型
	//printf("%d\n", age);

	//long num = 100;//long---长整型
	//printf("%d\n", num);

	//float f = 5.0;//float--单精度浮点型
	//printf("%f\n", f);

	//double d = 3.14;
	//printf("%lf\n", d);

	//%d--打印整型
	//%c--打印字符
	//%f--打印浮点数字-打小数
	//%p--以地址的形式打印
	//%x--打印十六进制

	//short age = 20;  //向内存申请2个字节=16bit 用来存放20
	//float weight = 95.6f;  //向内存申请4个字节存放95.6

	//定义变量的方法;类型+变量名+赋值
	//int num1 = 10;//局部变量  //局部变量：定义在代码块内部
	                            //全局变量：定义在代码块（{})之外的变量
	//int a = 10;//局部变量    //局部变量和全局变量名字建议不要相同-容易误会，产生bug
	//printf("%d\n",a);        //当局部变量和全局变量的名字相同时，局部变量优先

	//int num1 = 0; //计算2个数的和
	//int num2 = 0;
	//int sum = 0;
	//scanf("%d%d", &num1, &num2);  //输入数据-使用输入函数scanf
	//sum = num1 + num2;            //&；取地址符号
	//printf("sum=%d\n", sum);

	//1.局部变量的作用域是变量所在的局部范围
	//2.全局变量的作用域是整个工程

	//return 0;  //return:返回  0：整数
//}
//int main()
//{
	//int num = 0;  //局部变量的作用域
	//{
		//printf("num=%d\n", num);
    //}
	//return 0;
//}

//int global = 2020;  //全局变量的作用域
//int main()
//{
	//printf("test()--%d\n", global);



	//return 0;
//}

//生命周期
//1.局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束
//2.全局变量的生命周期：整个程序的生命周期


//#include <stdio.h>
//主函数
int main()				//定义主函数
{						//主函数体开始
	int max(int x, int y);		//对被调用函数max的声明
	int a, b, c;				//定义变量a，b，c
	scanf("%d,%d", &a, &b); 	//输入变量a和b的值
	c = max(a, b);			//调用max函数，将得到的值赋给c
	printf("max=%d\n", c); 	//输出c的值
	return 0;				//返回函数值为0
}//主函数体结束

//求两个整数中的较大者的max函数
int max(int x, int y)	//定义max函数,函数值为整型, 形式参数x和y为整型 
{
	int z;			//max函数中的声明部分，定义本函数中用到的变量z为整型
	if (x > y)z = x;		//若x>y成立，将x的值赋给变量z
	else z = y;			//否则(即x>y不成立)，将y的值赋给变量z
	return(z); 		//将z的值作为max函数值，返回到调用max函数的位置
}
