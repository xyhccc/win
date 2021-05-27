#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<assert.h>
int findch(char* dest)
{
	assert(dest);
	//查找最后一个单词，
	//计算这个单词的长度
	char* tmp = 0;
	int count = 0;

	while (*dest != '\0')
	{
		if (*dest == 32)
		{
			dest++;
			tmp = dest;
		}
		else
		{
			dest++;
		}
	}
	while (*tmp != '\0')
	{
		count++;
		tmp++;
	}
	return count;

}
int main()
{
	int ret = 0;
	char ch[60] = { 0 };
	gets(ch);
	ret = findch(&ch);
	printf("%d\n", ret);
	return 0;
}