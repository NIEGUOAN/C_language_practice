#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

void sort(int* a, int len)
{
	int i, j;
	int temp;
	for (i = 0; i < len - 1; i++)
		for (j = i + 1; j < len; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
}

int main()
{
	int a[1000] = { 0 };
	int t, n, num, i;
	
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &num);
			a[i] = num;
		}
		sort(a, n);
		for (i = 0; i < n; i++)
		{
			if (i == 0)
				printf("%d", a[i]);
			else
				printf(" %d", a[i]);
		}
		printf("\n");
	}
	return 0;
}