#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<assert.h>
int findch(char* dest)
{
	assert(dest);
	//�������һ�����ʣ�
	//����������ʵĳ���
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