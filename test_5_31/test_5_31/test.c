#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	while (scanf("%d %d %d", &n, &h, &m) != EOF)
//	{
//		if (m%h > 0)
//		{
//			printf("%d\n", n - m / h - 1);
//		}
//		else
//			printf("%d\n", n - m / h);
//
//	}
//	return 0;
//}
//Name   Age   Gender
//--------------------21个
//Jack   18     man和第一行对齐
//int main()
//{
//	char arr[] = { 'a','b','c' };
//	printf("%c", arr[1]);
//	return 0;
//}
int main()
{
	int arr = 0;
	int i = 0;
	float tmp = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr);
		tmp += arr;
	}
	printf("%.1f", tmp / 5);

	return 0;
}