#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int i, flag = 0;
		for (i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				flag++;
			}
		}
		printf("%d\n", flag % 2);
	}
	return 0;
}
