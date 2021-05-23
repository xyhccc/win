#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
char* my_strncpy(char* dest, char* src, size_t n)
{
	char* ret = dest;
	while (n&&(*dest++=*src++))
	{
		n--;
	}
	if (n)
	{
		while (--n)
		{
			*dest++ = '\0';
		}
	}
	return ret;
}


int main()
{
	char arr1[30] = "abcdefg";
	char arr2[5] = "hijk";
	int len = 0;
	scanf("%d", &len);
	my_strncpy(arr1, arr2, len);

	return 0;
}