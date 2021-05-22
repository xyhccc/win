#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////演示实例
//int main()
//{
//	int n = 10;
//	char *pc = (char*)&n;
//	int *pi = &n;
//
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
#include<assert.h>
#include<stdio.h>
//char* my_strstr(char* str, char* dest)
//{
//	assert(str&&dest);
//	char* count = str;
//	char* p1 = str;
//	char* p2 = dest;
//	if (*dest == '\0')
//	{
//		return str;
//	}
//	while (*count)
//	{
//		p1 = count;
//		p2 = dest;
//		while ((*p1) && (*p2) && (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return count;
//		}
//		count++;
//	}
//	return  NULL;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "cdf";
//	char*ret= my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("zaobudao");
//	}
//	else
//	{
//		printf("zaodaole");
//	}
//	
//	return 0;
//}
//int my_strcmp(char* p1, char* p2)
//{
//	assert(p1&&p2);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '\0')
//		{
//			return 0;
//		}
//		p1++;
//		p2++;
//	}
//	if (*p1 > *p2)
//	{
//		return 1;
//	}
//	else
//		 
//	    return -1;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdee";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret == 0)
//	{
//		printf("=");
//	}
//	else if (ret==-1)
//	{
//		printf("<");
//	}
//	else
//	{
//		printf(">");
//
//	}
//}
//void* my_memcpy(void* str, void* dest, size_t a)
//{
//	
//	assert(str&&dest);
//	void* ret = str;
//	while (a--)
//	{
//		*(char*)str = *(char*)dest;
//		++(char*)str;
//		++(char*)dest;
//
//	}
//	return ret;
//
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1,sizeof(arr1));
//
//
//	return 0;
//}