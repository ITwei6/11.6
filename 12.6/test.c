#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <string.h>
//void meun()
//{
//	printf("*************************\n");
//	printf("*****    1.play    ******\n");
//	printf("*****    0.exit    ******\n");
//	printf("*************************\n");
//}
//void game()
//{
//	//先生成随机数；
//	int ret = rand()%100+1;
//	
//	while (1)
//	{
//		printf("请输入数字：\n");
//		int x = 0;
//		scanf("%d", &x);
//		if (x < ret)
//		{
//			printf("你输入小了\n");
//		}
//		else if (x > ret)
//		{
//			printf("你输入大了\n");
//		}
//		else
//		{
//			printf("你猜对了\n");
//			break;
//		}
//	}
//}
//void test()
//{
//	int intput;
//	srand((unsigned int)time(NULL));//调用一次就可以了
//	do
//	{
//		meun();
//		printf("请选择：\n");
//		scanf("%d", &intput);
//		switch (intput)
//		{
//		case 1:game();
//			break;
//		case 0:  printf("退出游戏\n");
//			break;
//		default: printf("输入错误，请重新输入：\n");
//			break;
//		}
//
//	} while (intput);
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = 0;
//	if (n < 12)
//	{
//		printf("2");
//	}
//	else
//	{
//		int c = n / 12;
//	 sum = c * 4 + 2;
//	 printf("%d", sum);
//	}
//	
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = 0;
//	sum = n * (n + 1) / 2;
//	printf("%d", sum);
//	return 0;
//}1 1 2 3 5 8 13 21 34
//int  Fun(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fun(n - 1) + Fun(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret=Fun(n);
//	printf("%d", ret);
//	return 0;
//}1 1 2 3 5 8 13 21 34 55 89
//int main()
//{
//	int sum = 0;
//	int n;
//	scanf("%d", &n);
//	if (n <= 2)
//	{
//		sum = 1;
//	}
//	else
//	{
//		int i;
//		for (i = 0;i < 2;i++)
//		{
//			sum=
//		}
//	}
//	
//	return 0;
//}
#include <stdio.h>
#include <string.h>
//void reserve_(char* left, char* right)
//{
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reserve_(arr,arr+strlen(arr)-1);
//	printf("%s", arr);
//	return 0;
//}
//void reserve_string(char* str)
//{
//	if (*str != '\0')
//	{
//
//	}
//}
//int main()
//{// f abcde   f e  abcd  f e d  abc  f e d c ab
//	char arr[] = "abcdef";
//	reserve_string(arr);
//	return 0;
//}  1 1 2 3 5 8 13 21 34
int Fib(int n)
{ 
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;

}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret=Fib(n);
//	printf("%d", ret);
//	return 0;
//}
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}
#include <stdio.h>

/*
（1）提示用户输入两个不大于65535的正整数，并将用户的输入保存在两个变量中 （4分）
（2）若用户输入的不都是正整数或超出范围时，程序提示输入错误并要求用户重新输入 （6分）
（3）当用户输入的是两个不大于65535的正整数时，找到这两个正整数的所有公因数，并以从大到小的顺序显示出来 （10分）
*/

int main()
{
	int check = 1, b;
	double num1, num2;
	int n1, n2, max, i;
	char c;

	while (check) {
		printf("输入两个不大于65535的正整数（用空格间隔）:");
		b = scanf("%lf %lf", &num1, &num2);
		do {
			scanf("%c", &c);
		} while (c != '\n');	// 清除缓存区，确保下次scanf的正确读取

		// 判断输入是否为数字。如果输入字符或其他符号，b值为0，如输入的两个数均为数字，b值为2
		if (b == 2 && num1 > 0 && num1 <= 65535 && num2 > 0 && num2 <= 65535) {
			check = 0;
		}
		else
		{
			check = 1;
			continue;
		}

		// 判断输入是否为正整数
		if ((int)(num1 + 0.5) == num1 && (int)(num2 + 0.5) == num2) {
			check = 0;
		}
		else
		{
			check = 1;
			continue;
		}

		n1 = (int)(num1 + 0.5);
		n2 = (int)(num2 + 0.5);
	}


	max = (n1 > n2) ? n1 : n2;

	printf("%d和%d的公因数有：", n1, n2);

	for (i = max;i > 0;i--) {
		if (n1 % i == 0 && n2 % i == 0) {
			printf("%d\t", i);
		}
	}

	printf("\n");
	system("pause");

}