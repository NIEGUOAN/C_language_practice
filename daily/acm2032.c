#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int a[30][30];
		for (int i = 0; i < n; i++)//把每行的1确定,即第一个和最后一个
		{
			a[i][0] = 1;
			if (i != 0)
			{
				a[i][i] = 1;
			}
		}
		printf("1\n");
		for (int i = 1; i < n; i++)
		{
			printf("1");//最前面的1
			for (int j = 1; j < i; j++)//从第二个数开始输出
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];//上一行对齐的一个和前一个之和
				printf(" %d", a[i][j]);
			}
			printf(" 1\n");//最后面的1
		}
		printf("\n");
	}
	return 0;
}
