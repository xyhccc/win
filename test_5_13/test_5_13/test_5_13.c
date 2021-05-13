//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i<sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	for (i = 0; i<3; i++)
	{
		int j = 0;
		for (j = 0; j<4; j++)
		{
			arr[i][j] = i * 4 + j;
		}
	}
	for (i = 0; i<3; i++)
	{
		int j = 0;
		
		for (j = 0; j<4; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
	return 0;
}//void sxh (int y )
{
	int ge =   y%10;
	int shi = (y/10)%10;
	int bai = (y/100);
	if (ge*ge*ge + shi*shi*shi + bai*bai*bai == y)
		printf("%d\n", y );
}


int  main()
{
	int n = 0;
	for (n = 100; n < 1000; n++)
	{
		sxh (n);
	}
	
	return 0;

}
int main()
{
	int a  = 0;
	int sn = 0;
	scanf("%d", &a);
	sn = (a + a*a + a*a*a + a*a*a*a*a + a*a*a*a*a);
	printf("%d\n", sn);

	return 0;
}
int briary_search(int arr[], int key, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;

}

int main()
{
	 int arr[] = { 1, 2, 3, 4, 5, 6 };
	 int key = 0;
	 printf("请输入");
	 scanf("%d",&key);
	 int sz = sizeof(arr) / sizeof(arr[0]);
	 int ret = briary_search(arr, key, sz);
	 if (ret == -1)
	 {
		 printf("找不到\n");

	 }
	 else
	 {
		 printf("找到了，这个数字的下标是%d\n",ret);
	 }
	 
	 
	 
	 
	 return 0;
}

输入密码三次
三次以后都错误退出
int main()
{
	int mm = 0;
	int i  = 0;
	printf("请输入密码\n");
	for (i = 0; i <3; i++)
	{   
		scanf("%d", &mm);

		if (mm == 123)
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误\n");
			printf("请重新输入\n");
		
	

		}
	
	}
	return 0;
}
