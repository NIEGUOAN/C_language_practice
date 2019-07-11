#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
using namespace std;

int main()
{
	int t, n, temp;
	int a[50], b[50];
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d%d", &a[i], &b[i]);
		}
		//排序:根据箭身从小到大
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] > a[j])
				{
					temp = a[i]; a[i] = a[j]; a[j] = temp;
					temp = b[i]; b[i] = b[j]; b[j] = temp;
				}
			}
		}

		//输出
		for (int i = 0; i < n; i++)
		{//组数
			for (int j = 0; j < b[i]; j++)
			{//枝数
                //第一支箭
				printf(">+");
				for (int k = 0; k < a[i] - 2; k++)
				{
					printf("-");
				}
				printf("+>\n");
			}
			printf("\n");
		}
	}
	return 0;
}