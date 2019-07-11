#include <stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int n;
	char num[10];
	while (scanf("%d", &n) != EOF)
	{
		printf("%s\n", itoa(n, num, 2));
	}
	return 0;
}
