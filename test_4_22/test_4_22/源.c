#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int ret = 1; //����ÿ����˵Ľ�������ս׳˵Ľ��
	int sum = 0; //������׳�֮��
	for (i = 1; i <= 10; ++i)  //�� for ѭ����ʵ�ֽ׳�
	{
		ret = ret * i;
		sum += ret;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
