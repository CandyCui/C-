#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	printf("hello world");
//	system("pause");
//	return 0;
//}

//����Ϊ������ʽ��ע��VS����scanf_s�����䲻��C���Թ涨��
// Ϊ����VS��ʹ��scanfҪ�ڵ�һ�����#define  _CRT_SECURE_NO_WARNINGS
//C���Դ���������һ�п�ʼִ�У�main����-���
//ctrl+f5:����-����-����




//�������ͣ�char �ַ����ͣ�int ���ͣ�short �����ͣ�long �����ͣ�float �����ȸ����ͣ�double ˫���ȸ�����
//int main() {                                              //double���͵����������ʽ%lf
//	char ch = 'a';
//	int age = 20;
//	short num = 5;
//	float core = 67.5;
//	return 0;
//}
//ѡ����ʵ�������߿ռ�������
//int main() {
//	int a;
//	printf("sizeof int=%d\n", (int)sizeof(int));//�ֽ�Ϊ4
//	printf("sizeof char=%d\n", (int)sizeof(char));//1
//	printf("sizeof long=%d\n", (int)sizeof(long));//4
//	printf("sizeof short=%d\n", (int)sizeof(short));//2
//	printf("sizeof 98=%ld\n", (int)sizeof(98));
//	double b;
//	scanf_s("%lf", &b);//double���͵��������
//	printf("%f", b);
//	return 0;
//}
//һ���ֽ��а˸�λ(1byte = 8bit)��λ�ɾ����״̬��ʾ������ܵ�״ֱ̬��ת���ɶ�����0��1
//�����Ǹ����Ļ���λ��n���ɱ�ʾ����ֵΪ0--2��n�η���1
//�����ı�ʾ���ó�һλ������λ��0��ʾ����1��ʾ��
//1kb=1024byte;1mb=1024kb;1gb=1024mb;1tb=1024gb


//����
//int main() {
////�������� + ��������=0//�Ƽ��и�ֵ���д���ֵ
//	int age = 18;
//	double weight=0;
//	scanf("%lf", &weight);//������ֵ������scanf_sʱ��������ֵΪ���ֵ
//	age++;
//	weight = weight + 10;
//	printf("%d\n%lf", age,weight);
//	return 0;
//}


//{}��ı���Ϊȫ�ֱ���
//int a = 100;
//int main() {
//	//{}�ڵı����Ǿֲ�����
//	int a = 10;
//	printf("%d", a);//�ֲ�������ȫ�ֱ�����ͻʱ���ֲ��������ȣ���ӡ��a=10
//	return 0;
//}


//����
//1.���泣��
//10;
//12.3;
//'a';
// "abcfr";
//2.const���εĳ�����
//int main(){
//	const int num = 10;//��const���εı���ֵ�����ٸı��ˣ�num�����Ǳ����������κ����˳�����
//	return 0;
//}
//int main() {
//	int arr[10] = { 0 };//��ȷ     //int arr[]={0,1,2};��ȷ
//	int n = 10;
//	int arr2[n] = { 0 };//������ʽ�������ǳ���ֵ����ʹ��const����n����Ȼ�ᱨ��
//}
//3.#define ����ı�ʶ������
//����
//#define max 1000
//int main() {
//	int n = max;//maxֵ���ɸ���
//	printf("n=%d\n", n);
//	return 0;
//}
//

//�ַ���
//int main() {
//	//�ַ����ڽ�β��λ��������һ��\0���ַ�
//	//\0���ַ����Ľ�����־���ݺ���Ҫ
//	char arr[] = "hello";//[]��û�����������ݺ����ַ��������������鳤�ȸ�ֵ
//	//arr[]����Ԫ����������'h' 'e' 'l' 'l' 'o' '\0'
//	return 0;
//}
//#include<string.h>
//int main() {
//	char arr1[] = "hello";
//	char arr2[] = { 'h','e','l','l','o' };
//	int len1 = strlen(arr1);
//	printf("len1=%d\n", len1);//��ӡ��len1=5
//	printf("len2=%d\n", strlen(arr2));//��ӡ�����ֵ
//	//printf("%s\n", arr1);//arr1�������ַ�����ӡ��hello
//	//printf("%s\n", arr2);//arr2������ַ�����ӡ��hello??????//��Ϊû��\0����ӡ��ֹͣ������δ֪
//	return 0;
//}
//���ǣ��ڼ����ַ����ĳ���ʱ������\0�������ڣ���������Ԫ�ظ����ǣ���\0
//����
//#include<string.h>��Ϊʹ��strlen(�ַ����������ַ���)�������ַ�������

//ת���ַ���ת��ԭ���ַ�����˼
//int main() {
//	printf("c\test.c");//\t��һ��ת���ַ�����ӡ���Ĳ���c\test.c,����c   est.c
//    //Ϊ���������������ת���ַ�ǰ����\,����
//	printf("%s", "\"");
//	return 0;        
//}

//����ת���ַ���\ddd,��\130,����ddd��130���ǰ˽�������
//             \xdd,dd��ʾ����ʮ�����Ƶ����֣���x30