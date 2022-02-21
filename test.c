#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

////最简单的递归
//int main()
//{
//	main();
//	return 0;
//}

//void print(int n)//1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	print(num);
//	//print(1234)
//	//print((123)4)
//	//print(((12)3)4)
//	//print((((1)2)3)4)
//	return 0;
//}

//int my_strlen(char* len)
//{
//	int count = 0;
//	while (*len != '\0')
//	{
//		len++;
//		count++;
//	}
//	return count;
//}

//int my_strlen(char* len)
//{
//	if (*len != 0)
//		return 1 + my_strlen(len + 1);
//	else
//		return 0;
//}
//
////大事化小
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0
//
//#include <string.h>
//int main()
//{
//
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

////求N的阶乘
////int Fac1(int n)
////{
////	int i = 0;
////	int ret = 1;
////	for (i = 1; i <= n; i++)
////	{
////		ret *= i;
////	}
////	return ret;
////}
//
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//ret = Fac1(n);//循环的方式
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}

////求第n个斐波那契数
////1 1 2 3 5 8 13 21 34 55 89
//
////int count = 0;
////int Fbnq(int i)
////{
////	if (i == 3)//计算第3个斐波那契数的计算次数
////		count++;
////	if (i <= 2)
////		return 1;
////	else
////		return Fbnq(i - 1) + Fbnq(i - 2);
////}
//
//int Fib(int i)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (i > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		i--;
//	}
//	return c;
//
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	/*int n = Fbnq(i);*/
//	int n = Fib(i);
//	printf("%d\n", n);
//	/*printf("%d\n", count);*/
//	return 0;
//}

//stack overflow
void test(int n)
{
	if (n < 10000)
		test(n + 1);
}

int main()
{
	test(1);
	return 0;
}