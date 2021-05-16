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
//	//写一个函数 逆序字符串
//	char arr[256] ;
//	scanf("%s", arr);
//	rester(arr);
//	printf("%s\n", arr);
//
//	return 0; 
#include<math.h>
int main()
{
	//0-10000自幂数
	//每一位数*n相加等于这个数本身
	int i= 0;
	for (i = 0; i <= 100000; i++)
	{
		int sum = 0;
		int n = 1;
		int tmp = i;
		//判断位数
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