#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, m, i, j;
	while (scanf("%d %d", &n, &m) != EOF)
	{
		printf("+");
		for (i = 1; i <= n; i++)
		{
			printf("-");
		}
		printf("+\n");

		for (i = 1; i <= m; i++)
		{
			printf("|");
			for (j = 1; j <= n; j++)
			{
				printf(" ");
			}
			printf("|\n");
		}

		printf("+");
		for (i = 1; i <= n; i++)
		{
			printf("-");
		}
		printf("+\n");
		printf("\n");
	}
	return 0;
}
