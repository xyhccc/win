#define _CRT_SECURE_NO_WARNINGS 1 
#include"SLNode.h"
void SLNodeprint(SLNode* phead)
{
	SLNode* cur = phead;
	while (phead != NULL)
	{
		printf("%d", cur->data);
		cur = cur->next;
	}
}
void SLNodePushBack(SLNode* phead, SListType x)
{
	SLNode* tail = phead;
	if (tail == NULL)
	//找最后一个结点
	while (tail->next!= NULL)
	{
		tail = tail->data;
	}
	//申请空间，插入结点
	SLNode* newNode = (SLNode* )malloc(sizeof(SLNode));
	if (newNode == NULL)
	{
		ptintf("申请失败");
	}
	newNode->data = x;
	newNode->next = NULL;
	tail->next = newNode;

}
void SLNodePopBack(SLNode* phead);
void SLNodePushFront(SLNode* phead, SListType x);
void SLNodePopFront(SLNode* phead);