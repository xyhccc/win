#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	//��������
//	scanf("%d", &n);
//	//��ȡÿһλ
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
	//ѭ����������
	while ((ch = getchar()) != EOF)
	{
		printf("%c\n", (ch + 32));
		getchar();//��������\n�ַ�
	}
	return 0;
}