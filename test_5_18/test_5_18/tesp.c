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

//int my_strlen(char*str)
//{
//	assert(str);
//	if (*str)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//
//
//}
//void reverse(char*left, char*right)
//{
//	if (left != 0 || right != 0)
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//
////void reverse_str(char*str, int len)
////{
////	if (str == "")
////		return  reverse(str, str + len - 1);
//
//
//void reverse_str(char *str, int len)
//{
//
//		if (str == "")
//
//			return	reverse(str, str + len - 1);//ÕûÌåÄæÖÃ
//
//
//
//		while (*str != '\0') 
//		{
//
//			char *pCur = str;
//
//			if ((*str != '\0') || (*str != ' ')) 
//			{
//
//				str++;
//
//			}
//
//			reverse(pCur, str - 1);//µ¥´ÊÄæÖÃ
//		}
//
//	}
//
//int main()
//{
//
//	char str[] = "student a am i";
//
//	printf(" string=%s\n", str);
//
//	reverse_str(str, strlen(str));
//
//	printf(" string=%s\n", str);
//
//
//	return 0;
//}
////#include<windows.h>
////#include<stdio.h>
//////ÄæÖÃ
////
////void reverse(char *left, char *right){
////
////	if (left != 0 || right != 0) {
////
////		while (left < right){
////
////			char tmp = *left;
////
////			*left = *right;
////
////			*right = tmp;
////
////			left++;
////
////			right--;
////
////		}
////
////	}
////}
////
////
////
////void reverse_str(char *str, int len){
////
////	if (str == "")
////
////		return;
////
////	reverse(str, str + len - 1);//ÕûÌåÄæÖÃ
////
////
////
////	while (*str != '\0') {
////
////		char *pCur = str;
////
////		if ((*str != '\0') || (*str != ' ')) {
////
////			str++;
////
////		}
////
////		reverse(pCur, str - 1);//µ¥´ÊÄæÖÃ
////
////	}
////
////}
////
////int main(){
////
////	char str[] = "student a am i";
////
////	printf(" string=%s\n", str);
////
////	reverse_str(str, strlen(str));
////
////	printf(" string=%s\n", str);
////
////
////	return 0;
////
////}

//char* my_strcat(char*str, char*bar)
//{
//	assert(str&&bar);
//	char* ret = str;
//	while (*str)
//	{
//		str++;
//	}
//
//	while (*str++ = *bar++)
//	{
//		;
//		/**str = *bar;
//		str++;
//		bar++;*/
//	}
//	return ret;
//
//}
//int main()
//{
//	char arr1[30] = "abcdefg";
//	char arr2[]   = "bit";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

