#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	char arr[] = "AEIOUaeiou";
//	while ((ch = getchar()) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i<10; i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//			printf("Consonant\n");
//		getchar();//去除每个字符后的\n
//	}
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'A'&& ch <= 'Z') || (ch >= 'a'&& ch <= 'z'))
//		{
//			printf("shi\n");
//		}
//		else
//			printf("bushi\n");
//		getchar();
//	}
//
//	return 0;
//}
//int main()
//{
//	int t = 0;
//	while (scanf("%d", &t) != EOF)
//	{
//		if (t>0)
//			printf("%d\n", 1);
//		else if (t == 0)
//			printf("%.1f\n", 0.5f);
//		else
//			printf("%d\n", 0);
//		gechar();
//	}
//	return 0;
//	
////}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while ((scanf("%d %d %d", &a, &b, &c) != EOF))
//	{
//		if ((a + b) > c && (a + c) > b && (b + c) > a)
//		{
//			if (a == b&&b == c)
//			{
//				printf("dengbian\n");
//			}
//			else if (a == b || b == c || a == c)
//			{
//				printf("dengyao\n");
//			}
//			else
//			{
//				printf("sanjiaoxing\n");
//			}
//
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//
//	}
//	getchar();
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	//a = 0，输出“Not quadratic equation”； 
//	//
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	while (scanf("%f %f %f", &a, &b, &c) != EOF)
//	{
//		if (a != 0)
//		{
//			float ret = b*b - (4 * a*c);
//			if (ret > 0)
//			{
//				printf("x1=%.2f;x2=%.2f\n", -b + sqrt(ret) / (2 * a),
//					-b - sqrt(ret) / (2 * a));
//			}
//			else if (ret < 0)
//			{
//				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",
//					(-b) / (2 * a), sqrt(-ret) / (2 * a),
//					(-b) / (2 * a), sqrt(-ret) / (2 * a));
//			}
//			else
//			{
//				printf("x1=x2=%.2f", -b / (2 * a));
//			}
//		}
//		else
//		{
//			printf("Not quadratic equation\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		if ((b % 2 == 1) || (b == 8))
//		{
//			printf("%d", 31);
//		}
//		else if ((b % 2 == 0) && (b == 2))
//		{
//			printf("29");
//		}
//		else
//		{
//
//		}
//		{
//
//		}
//	}
//	return 0;
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	while (scanf("%d%d", &y, &m) != EOF)
//	{
//		int day = days[m - 1];
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		{
//			if (m == 2)
//				day += 1;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}
//输入   操作数1运算符2操作数
//输出   操作数1运算符2操作数=结果
//int main()
//{
//	double a = 0.0;
//	char b = 0;
//	double c = 0.0;
//	while (scanf("%lf%c%lf", &a, &b, &c) != EOF)
//	{
//		switch (b)
//		{
//		case'+':
//			printf("%.4lf+%.4lf=%.4lf",a,c,a+c);
//			break;
//		case'-':
//			printf("%.4lf-%.4lf=%.4lf", a, c, a - c);
//			break;
//		case'*':
//			printf("%.4lf*%.4lf=%.4lf", a, c, a * c);
//			break;
//		case'/':
//			if (c == 0.0)
//			{
//				printf("Wrong!Division by zero!\n");
//			}
//			else
//			{
//				printf("%.4lf/%.4lf=%.4lf", a, c, a / c);
//			}
//			break;
//		default:
//			printf("Invalid operation!\n");
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{ 
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j <n-i-1; j++)
//			{
//				printf(" ");
//			}
//			for (k = 0; k < i + 1; k++)
//			{
//				printf("* ");
//
//			}
//			printf("\n");
//		}
//		 
//	}
//	return 0;
//}

