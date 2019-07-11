#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)

int main()
{
	int n, num = 0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &num);
		for (int i = 1; i <= 3 * num; i++)
		{
			for (int j = 1; j <= num; j++)
				printf("HDU");
			printf("\n");
		}
	}
	return 0;
}
