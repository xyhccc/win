#include <stdlib.h>
#include <stdio.h>

//
////0-999ˮ�ɻ�����
////��ʮ��λ�����͵���������

//void sxh (int y )
//{
//	int ge =   y%10;
//	int shi = (y/10)%10;
//	int bai = (y/100);
//	if (ge*ge*ge + shi*shi*shi + bai*bai*bai == y)
//		printf("%d\n", y );
//}
//
//
//int  main()
//{
//	int n = 0;
//	for (n = 100; n < 1000; n++)
//	{
//		sxh (n);
//	}
//	
//	return 0;
//
//}
//int main()
//{
//	int a  = 0;
//	int sn = 0;
//	scanf("%d", &a);
//	sn = (a + a*a + a*a*a + a*a*a*a*a + a*a*a*a*a);
//	printf("%d\n", sn);
//
//	return 0;
//}
//int briary_search(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == key)
//		{
//			return mid;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	return -1;
//
//}
//
//int main()
//{
//	 int arr[] = { 1, 2, 3, 4, 5, 6 };
//	 int key = 0;
//	 printf("������");
//	 scanf("%d",&key);
//	 int sz = sizeof(arr) / sizeof(arr[0]);
//	 int ret = briary_search(arr, key, sz);
//	 if (ret == -1)
//	 {
//		 printf("�Ҳ���\n");
//
//	 }
//	 else
//	 {
//		 printf("�ҵ��ˣ�������ֵ��±���%d\n",ret);
//	 }
//	 
//	 
//	 
//	 
//	 return 0;
//}

//������������
//�����Ժ󶼴����˳�
//int main()
//{
//	int mm = 0;
//	int i  = 0;
//	printf("����������\n");
//	for (i = 0; i <3; i++)
//	{   
//		scanf("%d", &mm);
//
//		if (mm == 123)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//			printf("����������\n");
//		
//	
//
//		}
//	
//	}
//	return 0;
//}



//һֱ���������ַ�
//��Сдת����
//���ֲ����
//char zhzf(char y)
//{
//	if (y >= 65|| y <= 90)
//	{
//		y += 32;
//		printf("%c\n", y);
//	}
//	else if (y >= 97 || y <= 122)
//	{
//		y -= 32;
//		printf("%c\n", y);
//
//	}
//
//	else
//		return 0;
//
//}



//int main()
//{
//	int ch;
//	printf("�������ַ�\n");
//	
//	while ((ch = getchar()) != EOF)
//	{
//
//		if (ch >= 'a'&& ch <= 'z')
//		{
//			ch -= 32;
//			printf("%c\n", ch);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			ch += 32;
//			printf("%c\n", ch);
//		}
//		if (ch >= 0 && ch <= 9)
//		{
//			;
//		}
//		else
//		{
//			;
//		}
//	}
//	return 0;
//}


//��ӡ�˷��ھ���
//����9��ӡ9*9����12��ӡ12*12
//void dyb(int a)
//{
//	int i;
//	int j;
//
//		for (i = 1; i <= a; i++)
//		{
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d * %d = %d  ", i, j, j * i);
//
//				
//			}
//			printf("\n");
//		}
//	
//}
//
//int main()
//{
//	int a = 0;
//	printf("������Ҫ��ӡ�Ŀھ���\n");
//	scanf("%d",&a);
//	dyb(a);
//	return 0;
//}
//int jh(int* a, int* b)
//{
//	int tem = 0;
//	tem = *a;
//	*a = *b;
//	*b = tem;
//	printf("a=%d b=%d", *a, *b);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = 10;
//	jh(&a, &b);
//	return 0;
//}
//void year(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//	{
//		printf("�����������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//
//}
//
//
//
//
//int main()
//{
//	int i = 0;
//	printf("������һ����\n");
//	scanf("%d",&i);
//	year (i);
//
//	return 0;
//}


//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//void init(int brr[] ,int sz)
//{
//	printf("��ʼ������\n");
//	int i;
//	for (i = 0; i <= sz-1; i++)
//	{
//		scanf_s("%d", &brr[i]);
//	}
//}
//
//
//
//
//void emputy(int brr[],int sz)
//{
//	printf("�������\n");
//	int i;
//	for (i = 0; i <= sz-1; i++)
//	{
//		brr[i] = 0;
//		printf("%d\n",brr[i]);
//	}
//}
//
//void reverse(int brr[], int sz)
//{
//	printf("���������\n");
//	for (int i = sz - 1; i >= 0; i--)
//		printf("%d ", brr[i]);
//}
//
//
//
//int main()
//{
//	int brr[3];
//	int sz;
//	sz = sizeof(brr) / sizeof(brr[0]);
//	init(brr, sz);
//	printf("\n");
//	reverse(brr, sz);
//	
//	printf("\n");
//	emputy(brr, sz);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//�ж�����
//1.ֻ�ܱ�1�ͱ�������
//
//void if_ss(int i)
//{
//	int x;
//	for (x = 2; x < i; x++)
//	{
//		if (i%x == 0)
//		{
//			break;
//		}
//	}
//		
//		 if (x >=i && i!=1)
//		{
//			printf("������");
//
//		}
//		else
//		{
//			printf("��������");
//		}
//}
//
//
//int main()
//{
//	int i = 0;
//	printf("����һ����\n");
//	scanf("%d",&i);
//	if_ss(i);
//	printf("\n");
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int n = 0;
//	int i = 2;
//	printf("����Ҫ�жϵ�����\n");
//	scanf("%d", &n);
//	for (i = 2; i < n; i++){
//		if (n%i == 0){
//			break;
//		}
//	}
//	if (i >= n&&n != 1){
//		printf("������\n");
//	}
//	else{
//		printf("��������\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("����һ����\n");
//	scanf("%d",&n);
//	int sum =  1;
//	int num1 = 1;
//	int num2 = 1;
//	if (n == 1 || n == 2)
//	{
//		sum = 1;
//	}
//	else
//	{
//		for (i = 3; i <= n; i++)
//		{
//			sum = num1 + num2;
//			num1 = num2;
//			num2 = sum;
//		}
//	}
//	printf("%d\n",sum);
//	return 0;
//}
//int Fin(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return Fin(n - 1) + Fin(n - 2);
//}
//
//int main()
//{
//	int sum = 0;
//	int  n  = 0;
//	printf("������\n");
//	scanf("%d",&n);
//	sum = Fin(n);
//	printf("%d\n", sum);
//	return 0;
//}
int jc(int n ,int k)
{
	if (k == 0)
	{
		return 1;
	}
	return n*jc(n, k - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	printf("��n�Ľײ�\n");
	scanf("%d %d", &n,&k);
	int p = jc(n, k);
	printf("%d\n",p);
	return 0;
}