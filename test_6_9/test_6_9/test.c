#define _CRT_SECURE_NO_WARNINGS 1 
#include"SLNode.h"
int main()
{
	SLNode* head = NULL; 
	SLNodePushBack(head, 1);
	SLNodePushBack(head, 2);
	SLNodePushBack(head, 3);
	SLNodeprint(head);

	return 0;
}
