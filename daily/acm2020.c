#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

int a[110];
int main()
{
	int n, num, i, j, temp;

	while (scanf("%d", &n) != EOF)
	{
		if (n == 0)
			break;
		for (i = 0; i < n; i++)
		{
			scanf("%d", &num);
			a[i] = num;
		}

		for (i = 0; i < n; i++)
			for (j = i; j < n; j++)
			{
				if (abs(a[i]) < abs(a[j]))
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		printf("%d", a[0]);
		for (i = 1; i < n; i++)
			printf(" %d", a[i]);
		printf("\n");
	}
	return 0;
}