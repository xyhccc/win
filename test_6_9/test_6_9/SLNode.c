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
	//�����һ�����
	while (tail->next!= NULL)
	{
		tail = tail->data;
	}
	//����ռ䣬������
	SLNode* newNode = (SLNode* )malloc(sizeof(SLNode));
	if (newNode == NULL)
	{
		ptintf("����ʧ��");
	}
	newNode->data = x;
	newNode->next = NULL;
	tail->next = newNode;

}
void SLNodePopBack(SLNode* phead);
void SLNodePushFront(SLNode* phead, SListType x);
void SLNodePopFront(SLNode* phead);