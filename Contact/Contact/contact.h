#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#define MAX 1000


#define MAX_NAME 20
#define MAX_SEX  5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW

};
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];
	int size;//��ǰӵ�е�Ԫ�ظ���
};
//��ʼ������
void InitContact(struct Contact* ps);
//���Ӻ���
void AddContact(struct Contact* ps);
//ɾ������
void DelContact(struct Contact* ps);
//���Һ���
void SearchContact(struct Contact* ps);
//�޸ĺ���
void ModifyContact(struct Contact* ps);
//��ʾ����
void ShowContact(struct Contact* ps);



