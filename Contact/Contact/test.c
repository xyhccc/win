#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void menu()
{
	printf("********************************\n");
	printf("*********1.add       2.del  ****\n");
	printf("*********3.search    4.modify***\n");
	printf("*********5.show      0.exit ****\n");
	printf("********************************\n");
	printf("********************************\n");
}

int main()
{
	int inpute = 0;
	struct Contact con;
	//创建通讯录
	//初始化
	InitContact(&con);

	do
	{
	menu();
	printf("请输入");
	scanf("%d", &inpute);
		switch (inpute)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			printf("退出");
			break;
		default:
			printf("选择错误\n");

		}
	} while (inpute);
	return 0;
}