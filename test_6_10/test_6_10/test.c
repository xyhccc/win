#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef int SListType;
typedef struct SLNode
{
	SListType data;
	struct SLNode* next;
}SLNode;


int main()
{
	SLNode* phead =NULL;


	InitSLNode(phead);
	return 0;
}