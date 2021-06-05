#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	float a =  0;
//	for (i = 0; i < 5;i++)
//	{
//		for (i = 0; i < 5; i++)
//		{
//			scanf("%f", &a);
//			printf("%.1f ", a);
//			sum += a;
//		}
//		printf("%.1f\n", sum);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//5个学生
//	for (i = 0; i<5; i++)
//	{
//		double sum = 0.0;
//		int j = 0;
//		double score = 0.0;
//		for (j = 0; j<5; j++)
//		{
//			scanf("%lf", &score);
//			sum += score;
//			printf("%.1lf ", score);
//		}
//		printf("%.1lf\n", sum);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int a[60] = { 0 };
//	int i = 0;
//	for (i = 0; i < n*m; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	//打印
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", a[k]);
//			k++;
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int tmp = 0;
//	for (i = 1; i <= n*m; i++)
//	{
//		scanf("%d", &tmp);
//		printf("%d ", tmp);
//		if (i%m == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int a[50][60] = { 0 };
//	int i = 0;
//	int max = 0;
//	int x = 0;
//	int y = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &a[i][j]);
//			if (a[i][j]>max)
//			{
//				max = a[i][j];
//				x = i;
//				y = j;
//			}
//		}
//	}
//	printf("%d %d", x + 1, y + 1);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int a1[50][50] = { 0 };
//	int a2[50][50] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &a1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &a2[i][j]);
//		}
//	}
//	int tmp = 0;
//	int tmp1 = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (a1[i][j] != a2[i][j])
//				break;
//		}
//	}
//	if (i == n&&j == m)
//	{
//		printf("yes\n");
//
//	}
//
//		/*	{
//				tmp = 1;
//			}
//			else
//			{
//				tmp1 = 1;
//				break;
//			}
//		}
//	}
//	if (tmp1 + tmp == 1)
//	{
//		printf("yes\n");
//	}
//	*/
//	else
//	{
//		printf("no\n");
//	}
//	
//	return 0;
//}
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int i = 0;
	int j = 0;
	int a[50][50] = { 0 };
	for (i = 0; i < n; i++)
	{
			for (j = 0; j < m; j++)
			{
				scanf("%d", &a[i][j]);
			}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}