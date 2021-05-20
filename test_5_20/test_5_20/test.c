#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<assert.h>

my_memmove(void* dest, void* src, size_t count)
{
	void* ret = dest;
	assert(dest&&src);
	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest+count) = *((char*)src+count);

		}
	}
}


int main()
{
	int arr1[40] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[] = { 0 };
	my_memmove(arr1 + 2, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr1[i]);
	}
	return 0;

}