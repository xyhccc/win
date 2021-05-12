#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int ret = 1; //保存每次相乘的结果，最终阶乘的结果
	int sum = 0; //保存各阶乘之和
	for (i = 1; i <= 10; ++i)  //用 for 循环来实现阶乘
	{
		ret = ret * i;
		sum += ret;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
