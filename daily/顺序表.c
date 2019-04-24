#include<stdio.h>
#include<stdlib.h>
typedef struct {
	int data;
}Node;
typedef struct 
{
	Node* elem;
	int length;
}SqList;

int InitList(SqList* L)
{
	L->elem = (Node*)malloc(100 * sizeof(Node));
	if (L->elem == NULL)
		return -2;
	L->length = 0;
	return 1;
}

int GetElem(SqList L, int i, Node * e)
{
	if (i<1 || i>L.length)
		return 0;
	*e = L.elem[i - 1];
	return 1;
}







int LocateElem(SqList L, Node e)
{
	for (int i = 0; i < L.length; i++)
		if (L.elem[i].data == e.data)
			return i + 1;
	return 0;
}

int ListInsert(SqList * L, int i, Node e)
{
	if ((i < 1) || (i > L->length + 1))
		return 0;
	if (L->length == 100)
		return 0;
	for (int j = L->length - 1; j >= i - 1; j--)
		L->elem[j + 1] = L->elem[j];
	L->elem[i - 1] = e;
	++L->length;
	return 1;
}




int ListDelete(SqList * L, int i)
{
	if ((i < 1) || (i > L->length))return 0;
	for (int j = i; j <= L->length - 1; j++)
		L->elem[j - 1] = L->elem[j];
	--L->length;
	return 1;
}






























