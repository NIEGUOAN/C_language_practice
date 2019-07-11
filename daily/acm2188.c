#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main()
{
	int c, n, m;
	scanf("%d", &c);
	while (c--)
	{
		scanf("%d %d", &n, &m);
		if (n <= m)
			printf("Grass\n");
		else if (n % (m + 1) == 0 && n > m)
			printf("Rabbit\n");
		else if (n % (m + 1) != 0 && n > m)
			printf("Grass\n");
	}
	return 0;
}