#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)

int main()
{
	int t, num;
	int a[32];
	a[1] = 1;
	a[2] = 3;
	for (int i = 3; i <= 30; i++)
		a[i] = a[i - 1] + a[i - 2] * 2;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &num);
		printf("%d\n", a[num]);
	}
	return 0;
}
