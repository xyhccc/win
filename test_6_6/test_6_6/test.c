#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a[50] = { 0 };
//	int i = 0;
//	while (n)
//	{
//		if ((n % 2 == 0))
//		{
//			a[i] = 0;
//		}
//		else
//		{
//			a[i] = 1;
//		}
//		i++;
//		n= n / 10;
//	}
//	for(i--; i >= 0; i--)
//	{
//		printf("%d", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int arr[100000] = { 0 };
//	int i = 0;
//	int tmp = 0;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &tmp);
//		arr[tmp] = tmp;
//	}
//	for (i = 0; i<100000; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int max = 0;
//	int n = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &n);
//		if (n>max)
//			max = n;
//	}
//	printf("%d", max);
//	return 0;
//}
//int max3(int a, int b, int c)
//{
//	int max = a;
//	if (b > max)
//		max = b;
//	if (c > max)
//		max = c;
//	return max;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	float m = 0;
//	m = (float)max3(a + b, b, c )/( max3(a, b + c, c) + max3(a, b, b + c));
//	printf("%.2f", m);
//	return 0;
//}
int main()
{
	char *name[4] = { "hello", "word","i","am"};
	printf("%s",name[0]);
	return 0;
}