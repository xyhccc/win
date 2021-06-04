#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int a[100][100] = { 0 };
//	int b[100][100] = { 0 };
//	int i = 0;
//	int j = 0;
//	int count = 0.0;
//	scanf("%d%d", &n, &m);
//		//初始化二维数组
//	for(i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	//比较相同
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (a[i][j] == b[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	//打印
//	printf("%.2f\n", 100.0*count / (m*n));
//	return 0;
//}
//int main()
//{
//	int c[10] = { 0 };
//	int d[10] = { 0 };
//	while (scanf("%s %s", c, d) != EOF)
//	{
//		if (strcmp(c, "admin")==0 && strcmp(d, "admin")==0)
//		{
//			printf("dui\n");
//		}
//		else
//		{
//			printf("budui\n");
//		}
//	}
//	return 0;
//}
//1~2019有多少个包含9的数字
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 2020; i++)
//	{
//		//个位是9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		else if ((i / 10) % 10 == 9)
//		{
//			count++;
//		}
//		else
//		{
//			if ((i / 100) % 10 == 9)
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		//判断i是否包含9
//		int t = i;
//		while (t)
//		{
//			if (t % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			t = t / 10;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int fcount = 0;
//	int tcount = 0;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			fcount++;
//		}
//		else
//		{
//			tcount++;
//		}
//	}
//	printf("%d %d", tcount, fcount);
//	return 0;
//}
//int main()
//{
//	double a[50] = { 0 };
//	int i = 0;
//	int n = 0;
//	double sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf", &a[i]);
//		sum += a[i];
//	}
//	//排序
//	for (i = 1; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			if (a[j]>a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//	//打印
//	printf("%.2lf %.2lf %.2lf", a[n - 1], a[0], sum / n);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int a[60] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	if (a[0] < a[1])
//	{
//		for (i = 0; i < n-1; i++)
//		{
//			if (a[i] < a[i+1])
//			{
//				;
//			}
//			else
//			{
//				printf("unsorted\n");
//				break;
//			}
//		
//		}
//		printf("sorted\n");
//	}
//	else
//	{
//		for (i = n - 1; i <= 1; i--)
//		{
//			if (a[i] > a[i - 1])
//			{
//				;
//			}
//			else
//			{
//				printf("unsorted\n");
//				break;
//			}
//			
//		}
//		printf("sorted\n");
//	}
//
//
//	 
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	int flag1 = 0;
//	int flag2 = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i>0)
//		{
//			if (arr[i]>arr[i - 1])
//				flag1 = 1;
//			else if (arr[i]<arr[i - 1])
//				flag2 = 1;
//		}
//	}
//	//flag1 和 flag2 都为1是乱序的
//	if (flag1 + flag2 > 1)
//		printf("unsorted\n");
//	else
//		printf("sorted\n");
//	return 0;
//}
int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int a[60] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	//找到m的下标
	for (i = 0; i < n; i++)
	{
		if (m == a[i])
			break;
		
	}
	//移位
		while (i<n-1)
		{
			a[i] = a[i + 1];
			i++;
		}
		
	//打印
		for (i = 0; i < n - 1; i++)
		{
			printf("%d ", a[i]);
		}
	return 0;
}