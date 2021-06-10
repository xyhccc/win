#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef int SListType;
typedef struct SLNode
{
	SListType data;
	struct SLNode *next;
}SLNode;
void SLNodePushBack(SLNode* phead, SListType x);
void SLNodePopBack(SLNode* phead);
void SLNodePushFront(SLNode* phead, SListType x);
void SLNodePopFront(SLNode* phead);