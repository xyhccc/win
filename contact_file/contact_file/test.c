#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void menu()
{
	printf("********************************\n");
	printf("*********1.add       2.del  ****\n");
	printf("*********3.search    4.modify***\n");
	printf("*********5.show      6.save ****\n");
	printf("*********0.exit  ***************\n");
	printf("********************************\n");
}

int main()
{
	int inpute = 0;
	struct Contact con;
	//����ͨѶ¼
	//��ʼ��
	InitContact(&con);

	do
	{
	menu();
	printf("������");
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
		case SAVE:
			SaveContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			DestroyContact(&con);
			printf("�˳�");
			break;
		default:
			printf("ѡ�����\n");

		}
	} while (inpute);
	return 0;
}
