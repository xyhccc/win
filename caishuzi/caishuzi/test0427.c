#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("************************\n");
	printf("*** 1.play    0.exit ***\n");
	printf("************************\n");

}
void game()
{
	//1.生成一个随机数
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	//2.猜数字
	while (1)
{
		printf("猜数字:>");
	    scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");

		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}	
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("拜拜\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
		return 0;
}

