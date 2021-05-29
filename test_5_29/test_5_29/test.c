#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	//输入数据
//	scanf("%d", &n);
//	//获取每一位
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int ch = 0;
	//循环数据输入
	while ((ch = getchar()) != EOF)
	{
		printf("%c\n", (ch + 32));
		getchar();//处理多余的\n字符
	}
	return 0;
}