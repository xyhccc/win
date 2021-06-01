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
//int main()
//{
//	int arr = 0;
//	int i = 0;
//	float tmp = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr);
//		tmp += arr;
//	}
//	printf("%.1f", tmp / 5);
//
//	return 0;
//}
//void addsa(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i; j++)
//		{
//			if (*(arr+j)<*(arr+j+1))
//			{
//				tmp = *(arr+j);
//				*(arr + j) = *(arr+j+1);
//				*(arr + j + 1) = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	//第一行输入学生人数
//	//第二行输入成绩
//	//输出一行 前五名
//	int n = 0;
//	int arr[40] = { 0 };
//	int i = 0;
//	scanf("%d\n", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	addsa(&arr, n);
//	////冒泡排序
//	//int tmp = 0;
//	//int j = 0;
//	//for (i = 0; i < n - 1; i++)
//	//{
//	//	for (j = 0; j <n - i; j++)
//	//	{
//	//		if (arr[j]<arr[j + 1])
//	//		{
//	//			tmp = arr[j];
//	//			arr[j] = arr[j + 1];
//	//			arr[j + 1] = tmp;
//	//		}
//	//	}
//	//}
//	//打印
//	for (i = 0; i <5 ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	//四个数  1-衣服价格 2-月份 3-日 4有无优惠券
//	//11.11七折  12.12八折  优惠券50 (0或1) 
//	//结果保留两位小数
//	double a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	double ret = a;
//	int tmp = 1;
//	scanf("%lf %d %d %d",&a,&b,&c,&d);
//	//双11
//	if ((b == 11) && (c == 11))
//	{
//	
//			tmp = 0.7;
//	
//	}
//	//双12
//	if ((b == 12) && (c == 12))
//	{
//		
//	
//			tmp = 0.8;
//	}
//	a = a*tmp - d*50.0;
//	if (a < 0)
//	{
//		a = 0;
//	}
//	printf("%0.2f", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	float price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	float cut = 1;
//	scanf("%f%d%d%d", &price, &m, &d, &flag);
//	if (m == 11 && d == 11)
//	{
//		cut = 0.7;
//	}
//	else if (m == 12 && d == 12)
//	{
//		cut = 0.8;
//	}
//	price = price*cut - flag*50.0;
//	if (price < 0.0)
//		price = 0.0;
//	printf("%.2f\n", price);
//	return 0;
//}
