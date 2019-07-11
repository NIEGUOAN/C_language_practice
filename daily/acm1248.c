#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)
//三数的最大公约数为50

int main()
{
	int t, n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		if (n >= 1 && n < 150)
			printf("%d\n", n);
		else if (n >= 150 && n < 200)
			printf("%d\n", n % 150);
		else if (n >= 200 && n < 300)
			printf("%d\n", n % 200);
		else if (n >= 300 && n < 350)
			printf("%d\n", n % 300);
		else
			printf("%d\n", n % 50);
	}
	return 0;
}