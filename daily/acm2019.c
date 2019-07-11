#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, m, num, i;
	int a[101];
	while (scanf("%d %d", &n, &m) != EOF)
	{
		int flag = 0;
		if (n == 0 && m == 0)
			break;
		else
		{
			for (i = 1; i <= n; i++)
				a[i] = 0;
			for (i = 1; i <= n; i++)
			{
				scanf("%d", &num);
				if (num < m)
					a[i] = num;
				else
				{
					if (!flag)
					{
						a[i] = m;
						a[i + 1] = num;
						flag = 1;
					}
					else
					{
						a[i + 1] = num;
					}
				}
			}
		}
		printf("%d", a[1]);
		for (i = 2; i <= n + 1; i++)
		{
			printf(" %d", a[i]);
		}
		printf("\n");
	}
	return 0;
}