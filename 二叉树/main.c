#include<stdio.h>
#include<stdlib.h>

typedef struct BiThrNode
{
	char data;
	struct BiThrNode* lchild;//����ָ��
	struct BiThrNode* rchild;//�Һ���ָ��
	int LTag, RTag;//���ұ�־
}BiThrNode, * BiThrTree;

int NodeCount(BiThrTree T)//ͳ�ƽڵ����
{
	if (T == NULL)
		return 0;
	else
		return NodeCount(T->lchild) + NodeCount(T->rchild) + 1;
}

BiThrNode* CreateThr(char* str)//����������
{
	BiThrNode* p = NULL;
	if (*str != '#')
	{
		p->data = *str;
		p->lchild = CreateThr(++str);
		p->rchild = CreateThr(++str);
	}
	return p;
}

void InThreading(BiThrTree p)//����������
{
	if (p)
	{
		InThreading(p->lchild);
		if (!p->lchild)
		{
			p->LTag = 1;
			p->lchild = p;
		}
		else
			p->LTag = 0;
		if (!p->rchild)
		{
			p->RTag = 1;
			p->rchild = p;
		}
		else
			p->RTag = 0;
		InThreading(p->rchild);
	}
}

BiThrNode* last(BiThrNode* ptr)//��ǰ�����
{
	if (ptr == NULL)
		return NULL;
	if (ptr->LTag == 0)
		return ptr->lchild;
	else
		return ptr->lchild;
}

BiThrNode* next(BiThrNode* ptr)//�Һ�̽��
{
	if (ptr == NULL)
		return NULL;
	if (ptr->RTag == 0)
		return ptr->rchild;
	else
		return ptr->rchild;
}

int main()
{
	return 0;
}
