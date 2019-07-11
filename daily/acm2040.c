#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, a, b, i, j, suma = 0, sumb = 0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d", &a, &b);
		{
			for (i = 1; i < a; i++)
			{
				if (a % i == 0)
					suma = suma + i;
			}
			for (j = 1; j < b; j++)
			{
				if (b % j == 0)
					sumb = sumb + j;
			}
			if (suma == b && sumb == a)
				printf("YES\n");
			else
				printf("NO\n");
			suma = 0;
			sumb = 0;
		}
	}
	return 0;
}
