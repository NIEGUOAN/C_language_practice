#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main()
{
	int n, num, sum, i = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n == -1)
			break;
		else
		{
			sum = 0;
			while (n--)
			{
				scanf("%d", &num);
				sum = sum + num;
			}
			i++;
		}
		printf("Sum of #%d is %d\n", i, sum);
	}
	return 0;
}