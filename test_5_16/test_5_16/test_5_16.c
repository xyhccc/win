#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>




//void rester(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* L = str;
//	char* R =str+len-1;
//
//	while (L<R)
//	{
//		char tmp = *L;
//		*L = *R;
//		*R = tmp;
//		L++;
//		R--;
//	}
//
//}
//
//int main()
//{
//	//дһ������ �����ַ���
//	char arr[256] ;
//	scanf("%s", arr);
//	rester(arr);
//	printf("%s\n", arr);
//
//	return 0; 
#include<math.h>
int main()
{
	//0-10000������
	//ÿһλ��*n��ӵ������������
	int i= 0;
	for (i = 0; i <= 100000; i++)
	{
		int sum = 0;
		int n = 1;
		int tmp = i;
		//�ж�λ��
		while (tmp /= 10)
		{
			n++;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow( tmp % 10 , n);
			tmp /= 10;
		
		}
		if (i == sum)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}