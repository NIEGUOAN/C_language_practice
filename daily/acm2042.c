#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, num, sheep = 3;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &num);
		while (num--)
		{
			sheep = sheep - 1;
			sheep = sheep * 2;
		}
		printf("%d\n", sheep);
		sheep = 3;
	}
	return 0;
}
