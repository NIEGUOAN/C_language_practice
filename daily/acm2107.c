#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main()
{
	int n, num, max = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n == 0)
			break;
		else
		{
			max = 0;
			while (n--)
			{
				scanf("%d", &num);
				if (num > max)
					max = num;
			}
		}
		printf("%d\n", max);
	}
	return 0;
}