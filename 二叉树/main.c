#include<stdio.h>
#include<stdlib.h>

typedef struct BiThrNode
{
	char data;
	struct BiThrNode* lchild;//左孩子指针
	struct BiThrNode* rchild;//右孩子指针
	int LTag, RTag;//左右标志
}BiThrNode, * BiThrTree;

int NodeCount(BiThrTree T)//统计节点个数
{
	if (T == NULL)
		return 0;
	else
		return NodeCount(T->lchild) + NodeCount(T->rchild) + 1;
}

BiThrNode* CreateThr(char* str)//建立二叉树
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

void InThreading(BiThrTree p)//中序线索化
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

BiThrNode* last(BiThrNode* ptr)//找前驱结点
{
	if (ptr == NULL)
		return NULL;
	if (ptr->LTag == 0)
		return ptr->lchild;
	else
		return ptr->lchild;
}

BiThrNode* next(BiThrNode* ptr)//找后继结点
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
