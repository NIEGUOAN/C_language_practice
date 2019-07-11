#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int a[10000][10000];
int main()
{
	int s, x = 0, y = 0, n, m, tempx = 0, tempy = 0;
	while (scanf("%d %d", &m, &n) != EOF)
	{
		int max = 0;
		for (x = 1; x <= m; x++)
		{
			for (y = 1; y <= n; y++)
			{
				scanf("%d", &s);
				a[x][y] = s;
				if (abs(a[x][y]) > abs(max))
				{
					max = a[x][y];
					tempx = x;
					tempy = y;
				}
			}
		}
		printf("%d %d %d\n", tempx, tempy, max);
	}
	return 0;
}
