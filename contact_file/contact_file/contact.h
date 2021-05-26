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
//通讯录类型
struct Contact
{
	struct PeoInfo* data;
	int size;//当前拥有的元素个数
	int capcity;//最大容量
};
//初始化函数
void InitContact(struct Contact* ps);
//增加函数
void AddContact(struct Contact* ps);
//删除函数
void DelContact(struct Contact* ps);
//查找函数
void SearchContact(struct Contact* ps);
//修改函数
void ModifyContact(struct Contact* ps);
//显示函数
void ShowContact(struct Contact* ps);
//释放内存
void DestroyContact(struct Contact* ps);
//保存文件
void SaveContact(struct Contact* ps);
//加载文件
void LoadContact(struct Contact* ps);




