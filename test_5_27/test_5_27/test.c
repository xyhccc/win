#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<assert.h>
//int findch(char* dest)
//{
//	assert(dest);
//	//查找最后一个单词，
//	//计算这个单词的长度
//	char* tmp = 0;
//	int count = 0;
//
//	while (*dest != '\0')
//	{
//		if (*dest == 32)
//		{
//			dest++;
//			tmp = dest;
//		}
//		else
//		{
//			dest++;
//		}
//	}
//	while (*tmp != '\0')
//	{
//		count++;
//		tmp++;
//	}
//	return count;
//
//}
//int main()
//{
//	int ret = 0;
//	char ch[60] = { 0 };
//	gets(ch);
//	ret = findch(&ch);
//	printf("%d\n", ret);
//	return 0;
//}
allflip(char* source, int len )
{
	assert(source);
	char* left = source;
	char* right = source + len;
	char tmp = 0;
	while (left < right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
	//翻转一组字符
	left = source;

 	while (*left != '\0')
	{
		if (*left == 32)
		{
			char* temp = left + 1;
			left--;
			while (source < left)
			{
				tmp = *source;
				*source = *left;
				*left = tmp;
				source++;
				left--;
			}
			left = temp;
		}
		else
		{
			left++;
		}
	}
}

int main()
{
	//先整体反转 再单词翻转
	char ch[] = "nowcoder a am";
	int len = strlen(ch)-1;
	allflip(&ch , len );
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%c", ch[i]);
	}
	return 0;
}