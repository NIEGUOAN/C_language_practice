#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, i, num = 0, min, temp, record;
	int a[100];
	while (scanf("%d", &n) != EOF)
	{
		if (n == 0)
			break;
		else
		{
			min = 32767;
			for (i = 0; i < n; i++)
			{
				scanf("%d", &num);
				a[i] = num;
				if (a[i] <= min)
				{
					min = a[i];
					record = i;
				}
			}
			temp = a[0];
			a[0] = a[record];
			a[record] = temp;
		}
		printf("%d", a[0]);
		for (i = 1; i < n; i++)
		{
			printf(" %d", a[i]);
		}
		printf("\n");
	}
	return 0;
}
