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
	//��ͷ���ĵ�����L�ĵ�i��λ�ò���x��Ԫ��
	LNode *q, *s;
	int j = 0;
	q = L; 			       //qΪǰ����� 
	while (q&&j<i - 1){
		q = q->next;                         //���ҵ�i��λ�õ�ǰ����� 
		j++;
	}
	s = (Linklist)malloc(sizeof(Lnode));           //����Ľ��Ϊs
	s->data = x;
	s->next = q->next;
	q->next = s;
	return L;
}