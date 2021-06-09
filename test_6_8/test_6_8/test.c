#define _CRT_SECURE_NO_WARNINGS 1 
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d",a[i]);
//	}
//	return 0;
//}


LinkList Insert_List(LinkList L, int i, ElemType x) {
	//带头结点的单链表L的第i个位置插入x的元素
	LNode *q, *s;
	int j = 0;
	q = L; 			       //q为前驱结点 
	while (q&&j<i - 1){
		q = q->next;                         //查找第i个位置的前驱结点 
		j++;
	}
	s = (Linklist)malloc(sizeof(Lnode));           //插入的结点为s
	s->data = x;
	s->next = q->next;
	q->next = s;
	return L;
}