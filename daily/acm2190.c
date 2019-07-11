#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main()
{
	int c, n;
	int a[31];
	a[1] = 1;
	a[2] = 3;
	for (int i = 3; i <= 30; i++)
		a[i] = a[i - 1] + a[i - 2] * 2;
	scanf("%d", &c);
	while (c--)
	{
		scanf("%d", &n);
		printf("%d\n",a[n]);
	}
	return 0;
}