#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
#include<stdio.h>



//char* my_strcpy(char*deyi, char*str)
//{
//	assert(deyi != NULL);
//	assert(str != NULL);
//	char* ret = deyi;
//	while (*deyi++ = *str++)//¿½±´ / 0;
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
int my_strlen(char*str)
{
	assert(str);
	if (*str)
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}

int main()
{
	char arr[] = "abcde";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;


}