#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)

int main()
{
	int a, i;
	while (scanf("%d", &a) != EOF)
	{
		if (a == 0)
			break;
		else
			for (i = 1; a % i == 0; i = i * 2)
				continue;
		printf("%d\n", i / 2);
	}
	return 0;
}
