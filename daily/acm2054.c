#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void process(char a[])
{
	int i, j, len, dot = -1;

	len = strlen(a);
	for (i = 0; i <= len - 1; i++)
	{
		if (a[i] == '.')
		{
			dot = i;
			break;
		}
	}
	if (dot >= 0)
	{
		for (i = len - 1; i >= 0; i--)
		{
			if (a[i] != '0')
				break;
			else
				a[i] = '\0';
		}
		if (a[i] == '.')
			a[i] = '\0';
	}
}
int main()
{
	char a[100000], b[100000];
	int flag, i, j;
	while (scanf("%s %s", a, b) != EOF)
	{
		process(a);
		process(b);
		flag = strcmp(a, b);
		if (flag == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
