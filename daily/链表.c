#include<stdio.h>
#include<stdlib.h>
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode, * LinkList;





int InitList(LinkList* L)
{
	*L = (LNode*)malloc(sizeof(LNode));
	(*L)->next = NULL;
	return 1;
}



int GetElem(LinkList L, int i, int* e)
{
	LNode* p = L->next; int j = 1;
	while (p && j < i)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return 0;
	*e = p->data;
	return 1;
}

LNode* LocateElem(LinkList L, int e)
{
	LNode* p = L->next;
	while (p && p->data != e)
		p = p->next;
	return p;
}

int ListInsert(LinkList * L, int i, int e)
{
	LNode* p = *L; int j = 0;
	while (p && (j < i - 1))
	{
		p = p->next; ++j;
	}
	if (!p || j > i - 1)
		return 0;
	LNode * s = (LNode*)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return 1;
}

int ListDelete(LinkList * L, int i)
{
	LNode* p = (*L); int j = 0;
	while ((p->next) && (j < i - 1))
	{
		p = p->next; ++j;
	}
	if (!(p->next) || (j > i - 1))
		return 0;
	LNode * q = p->next;
	p->next = q->next;
	free(q);
	return 1;
}

void CreateList_H(LinkList * L, int n)
{
	*L = (LNode*)malloc(sizeof(LNode));
	(*L)->next = NULL;
	for (int i = 0; i > n; ++i)
	{
		LNode* p = (LNode*)malloc(sizeof(LNode));
		scanf("%d", &p->data);
		p->next = (*L)->next; (*L)->next = p;
	}
}
void CreateList_R(LinkList * L, int n)
{
	(*L) = (LNode*)malloc(sizeof(LNode));
	(*L)->next = NULL;
	LNode* r = (*L);
	for (int i = 0; i < n; ++i)
	{
		LNode* p = (LNode*)malloc(sizeof(LNode));
		scanf("%d", &p->data);
		p->next = NULL; r->next = p;
		r = p;
	}
}