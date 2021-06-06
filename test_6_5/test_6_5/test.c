#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//¥Ú”°
//	int i = 0;
//	int j = 0;
//	int a[50][50] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			if ((j == 0)||(i==j))
//			{
//				a[i][j] = 1;
//			}
//			else
//			{
//				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//			}
//			
//		}
//
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-5d", a[i][j]);
//			//printf("   ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	char arr[3][3] = { 0 };
//	char flag = 'c';
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%c", &arr[i][j]);
//			getchar();
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
//		{
//			flag = arr[i][1];
//			break;
//		}
//		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
//		{
//			flag = arr[1][i];
//			break;
//		}
//	}
//	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
//	{
//		flag = arr[0][0];
//	}
//	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
//	{
//		flag = arr[2][0];
//	}
//		if (flag == 'K')
//			printf("KiKi wins!");
//		else if (flag == 'B')
//			printf("BoBo wins!");
//		else
//			printf("No winner!");
//			return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[40] = { 0 };
//	int i = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		arr[i++] = n % 6;
//		n /= 6;
//	}
//	for (i--; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int a[50] = { 0 };
	if ((n % 2 == 0))
		a[0] = 0;
	return 0;
}