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
//	//�������������
//	int ret = rand()%100+1;
//	
//	while (1)
//	{
//		printf("���������֣�\n");
//		int x = 0;
//		scanf("%d", &x);
//		if (x < ret)
//		{
//			printf("������С��\n");
//		}
//		else if (x > ret)
//		{
//			printf("���������\n");
//		}
//		else
//		{
//			printf("��¶���\n");
//			break;
//		}
//	}
//}
//void test()
//{
//	int intput;
//	srand((unsigned int)time(NULL));//����һ�ξͿ�����
//	do
//	{
//		meun();
//		printf("��ѡ��\n");
//		scanf("%d", &intput);
//		switch (intput)
//		{
//		case 1:game();
//			break;
//		case 0:  printf("�˳���Ϸ\n");
//			break;
//		default: printf("����������������룺\n");
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
��1����ʾ�û���������������65535���������������û������뱣�������������� ��4�֣�
��2�����û�����Ĳ������������򳬳���Χʱ��������ʾ�������Ҫ���û��������� ��6�֣�
��3�����û������������������65535��������ʱ���ҵ������������������й����������ԴӴ�С��˳����ʾ���� ��10�֣�
*/

int main()
{
	int check = 1, b;
	double num1, num2;
	int n1, n2, max, i;
	char c;

	while (check) {
		printf("��������������65535�����������ÿո�����:");
		b = scanf("%lf %lf", &num1, &num2);
		do {
			scanf("%c", &c);
		} while (c != '\n');	// �����������ȷ���´�scanf����ȷ��ȡ

		// �ж������Ƿ�Ϊ���֡���������ַ����������ţ�bֵΪ0�����������������Ϊ���֣�bֵΪ2
		if (b == 2 && num1 > 0 && num1 <= 65535 && num2 > 0 && num2 <= 65535) {
			check = 0;
		}
		else
		{
			check = 1;
			continue;
		}

		// �ж������Ƿ�Ϊ������
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

	printf("%d��%d�Ĺ������У�", n1, n2);

	for (i = max;i > 0;i--) {
		if (n1 % i == 0 && n2 % i == 0) {
			printf("%d\t", i);
		}
	}

	printf("\n");
	system("pause");

}