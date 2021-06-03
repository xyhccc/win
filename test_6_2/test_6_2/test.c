#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n-i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <i+1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i <= n; i++)
//		{
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <n-i+1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
////}
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i <= n ; i++)
//		{
//			int j = 0;
//			for (j = 0; j <=n-i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <=i+1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	double a = 0;
//	double sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%lf", &a);
//		sum += a;
//	}
//	printf("%0.2lf", sum / 5);
//	return 0;
//}
//1
//12
//123
//1234
//int main()
//{
//	int i = 0;
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <i+2 ; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;//输入的值
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	for (i = n; i > 0; i--)
//	{
//		if (arr[i - 1]>m)
//		{
//			arr[i - 1] = arr[i];
//		}
//		else
//		{
//			arr[i] = m;
//			break;
//		}
//	}
//	if (i == 0)
//	{
//		arr[i] = m;
//	}
//	//打印
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	int m = 0;//要插入的数据
//	//输入数据
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	//处理
//	for (i = n; i>0; i--)
//	{
//		if (arr[i - 1] > m)
//		{
//			arr[i] = arr[i - 1];
//		}
//		else
//		{
//			arr[i] = m;
//			break;
//		}
//	}
//	//如果插入数字小于所有的数字
//	if (i == 0)
//	{
//		arr[i] = m;
//	}
//	//打印
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int arr[60] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//		//把数放到数组
//		int arr[60] = { 0 };
//		int i = 0;
//		for (i = 0; i < n-1; i++)
//		{
//			arr[i] = 2+i;   
//		}
//		//判断
//		for (i = 2; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <n-1; j++)
//			{
//				if (arr[j+i-1] % i == 0)
//				{
//					arr[j+i-1]=0;
//				}
//			}
//		}
//		//dayin
//		int count = 0;
//		for (i = 0; i < n - 1; i++)
//		{
//			  
//			if (arr[i] == 0)
//			{
//				count++;
//			}
//			else
//			{
//				printf("%d ", arr[i]);
//			}
//		}
//		printf("\n");
//		printf("%d",count);
//	}
//
//	return 0;
//}
