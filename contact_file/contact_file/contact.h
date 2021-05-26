#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

//#define MAX 500
#define DEFALT_SZ 3

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
	SHOW,
	SAVE

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
	struct PeoInfo* data;
	int size;//��ǰӵ�е�Ԫ�ظ���
	int capcity;//�������
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
//�ͷ��ڴ�
void DestroyContact(struct Contact* ps);
//�����ļ�
void SaveContact(struct Contact* ps);
//�����ļ�
void LoadContact(struct Contact* ps);




