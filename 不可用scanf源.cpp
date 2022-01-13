#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	printf("hello world");
//	system("pause");
//	return 0;
//}

//以上为基本格式，注：VS下用scanf_s，但其不是C语言规定的
// 为了在VS下使用scanf要在第一行添加#define  _CRT_SECURE_NO_WARNINGS
//C语言从主函数第一行开始执行，main函数-入口
//ctrl+f5:编译-链接-运行




//数据类型：char 字符类型；int 整型；short 短整型；long 长整型；float 单精度浮点型；double 双精度浮点型
//int main() {                                              //double类型的输入输出格式%lf
//	char ch = 'a';
//	int age = 20;
//	short num = 5;
//	float core = 67.5;
//	return 0;
//}
//选择合适的类型提高空间利用率
//int main() {
//	int a;
//	printf("sizeof int=%d\n", (int)sizeof(int));//字节为4
//	printf("sizeof char=%d\n", (int)sizeof(char));//1
//	printf("sizeof long=%d\n", (int)sizeof(long));//4
//	printf("sizeof short=%d\n", (int)sizeof(short));//2
//	printf("sizeof 98=%ld\n", (int)sizeof(98));
//	double b;
//	scanf_s("%lf", &b);//double类型的输入输出
//	printf("%f", b);
//	return 0;
//}
//一个字节有八个位(1byte = 8bit)，位由晶体管状态表示，晶体管的状态直接转化成二进制0或1
//不考虑负数的话，位数n，可表示的数值为0--2的n次方减1
//负数的表示是拿出一位做符号位，0表示正，1表示负
//1kb=1024byte;1mb=1024kb;1gb=1024mb;1tb=1024gb


//常量
//int main() {
////数据类型 + 变量名字=0//推荐有赋值，有触发值
//	int age = 18;
//	double weight=0;
//	scanf("%lf", &weight);//变量赋值后，再有scanf_s时，以输入值为最后值
//	age++;
//	weight = weight + 10;
//	printf("%d\n%lf", age,weight);
//	return 0;
//}


//{}外的变量为全局变量
//int a = 100;
//int main() {
//	//{}内的变量是局部变量
//	int a = 10;
//	printf("%d", a);//局部变量和全局变量冲突时，局部变量优先，打印出a=10
//	return 0;
//}


//常量
//1.字面常量
//10;
//12.3;
//'a';
// "abcfr";
//2.const修饰的常变量
//int main(){
//	const int num = 10;//被const修饰的变量值不能再改变了，num本质是变量，但修饰后有了常属性
//	return 0;
//}
//int main() {
//	int arr[10] = { 0 };//正确     //int arr[]={0,1,2};正确
//	int n = 10;
//	int arr2[n] = { 0 };//数组表达式【】内是常量值，即使用const修饰n，依然会报错
//}
//3.#define 定义的标识符常量
//例：
//#define max 1000
//int main() {
//	int n = max;//max值不可更改
//	printf("n=%d\n", n);
//	return 0;
//}
//

//字符串
//int main() {
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志，狠狠重要
//	char arr[] = "hello";//[]内没有数，它根据后面字符串长度来对数组长度赋值
//	//arr[]数组元素有六个：'h' 'e' 'l' 'l' 'o' '\0'
//	return 0;
//}
//#include<string.h>
//int main() {
//	char arr1[] = "hello";
//	char arr2[] = { 'h','e','l','l','o' };
//	int len1 = strlen(arr1);
//	printf("len1=%d\n", len1);//打印出len1=5
//	printf("len2=%d\n", strlen(arr2));//打印出随机值
//	//printf("%s\n", arr1);//arr1有六个字符，打印出hello
//	//printf("%s\n", arr2);//arr2有五个字符，打印出hello??????//因为没有\0，打印不停止，后面未知
//	return 0;
//}
//但是，在计算字符串的长度时，不将\0计算在内；计算数组元素个数是，算\0
//引：
//#include<string.h>，为使用strlen(字符数组名或字符串)来计算字符串长度

//转义字符：转变原来字符的意思
//int main() {
//	printf("c\test.c");//\t是一个转义字符，打印出的不是c\test.c,而是c   est.c
//    //为避免这种情况，在转义字符前加上\,即可
//	printf("%s", "\"");
//	return 0;        
//}

//两个转义字符：\ddd,如\130,其中ddd（130）是八进制数字
//             \xdd,dd表示两个十六进制的数字，如x30