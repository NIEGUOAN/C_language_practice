#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
struct Tree
{
	int data;
	struct Tree* left;
	struct Tree* right;
};

void PrintTree(struct Tree* TP)
{
	if (TP != NULL)
	{
		printf("%d", TP->data);
		if (TP->left != NULL || TP->right != NULL)
		{
			printf("(");
			PrintTree(TP->left);
			if (TP->right != NULL)
				printf(",");
			PrintTree(TP->right);
			printf(")");
		}
	}
}

struct Tree* CreateTree(int a[], int n)
{
	int i, j;
	struct Tree** b, * q = NULL;
	b = malloc(sizeof(struct Tree) * n);
	for (i = 0; i < n; i++)
	{
		b[i] = malloc(sizeof(struct Tree));
		b[i]->data = a[i];
		b[i]->left = b[i]->right = NULL;
	}
	for (i = 1; i < n; i++)
	{
		int k1 = -1, k2;
		for (j = 0; j < n; j++)
		{
			if (b[j] != NULL && k1 == -1)
			{
				k1 = j;
				continue;
			}
			if (b[j] != NULL)
			{
				k2 = j;
				break;
			}
		}
		for (j = k2; j < n; j++)
		{
			if (b[j] != NULL)
			{
				if (b[j]->data < b[k1]->data)
				{
					k2 = k1;
					k1 = j;
				}
				else if (b[j]->data < b[k2]->data)
					k2 = j;
			}
		}
		q = malloc(sizeof(struct Tree));
		q->data = b[k1]->data + b[k2]->data;
		q->left = b[k1];
		q->right = b[k2];
		b[k1] = q;
		b[k2] = NULL;
	}
	free(b);
	return q;
}

int TreeLength(struct Tree* FTP, int L)
{
	{
		if (FTP == NULL)
			return 0;
		else
		{
			if (FTP->left == NULL && FTP->right == NULL)
			{
				return FTP->data* L;
			}
			else
				return TreeLength(FTP->left, L + 1) + TreeLength(FTP->right, L + 1);
		}
	}
}

void TreeCode(struct Tree* FTP, int L)
{
	static int a[10];
	if (FTP != NULL)
	{
		if (FTP->left == NULL && FTP->right == NULL)
		{
			int i;
			printf("结点权值为%d的编码:", FTP->data);
			for (i = 0; i < L; i++)
				printf("%d", a[i]);
			printf("\n");
		}
		else
		{
			a[L] = 0;
			TreeCode(FTP->left, L + 1);
			a[L] = 1;
			TreeCode(FTP->right, L + 1);
		}
	}
}

void main()
{
	int n, i;
	int* a;
	struct Tree* ftp;
	printf("输入哈夫曼树带权叶子结点数n: ");
	while (1)
	{
		scanf("%d", &n);
		if (n > 1)
			break;
		else
			printf("请重新输入:");
	}
	a = malloc(sizeof(int) * n);
	printf("请输入%d个整数作为权值: ", n);
	for (i = 0; i < n; i++)
	{
		scanf(" %d", &a[i]);
	}
		ftp = CreateTree(a, n);
		printf("广义表形式的哈夫曼树: ");
		PrintTree(ftp);
		printf("\n");
		printf("哈夫曼树的带权路径长度: ");
		printf("%d\n", TreeLength(ftp, 0));
		printf("树中每个叶子结点的哈夫曼编码: \n");
		TreeCode(ftp, 0);
}