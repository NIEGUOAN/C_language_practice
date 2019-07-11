#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main()
{
	int c, n;
	scanf("%d", &c);
	while (c--)
	{
		scanf("%d", &n);
		if (n == 1)
			printf("1\n");
		else
		{
			for (int i = 1; i <= n; i++)
				for (int j = 1; j <= n; j++)
				{
					if (j == 1)
						printf("%d", i * j);
					else if (j == n)
						printf(" %d\n", i * j);
					else
						printf(" %d", i * j);
				}
		}
	}
	return 0;
}