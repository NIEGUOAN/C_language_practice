#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, a, b, c, x;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d %d", &a, &b, &c);
		for (x = 1000; x <= 9999; x++)
		{
			if ((x % a == 0) && ((x + 1) % b == 0) && ((x + 2) % c == 0))
				break;
		}
		if (x == 10000)
			printf("Impossible\n");
		else
			printf("%d\n", x);
	}
	return 0;
}