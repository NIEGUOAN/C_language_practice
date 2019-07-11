#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)
int main()
{
	int c, n, B = 0;
	scanf("%d", &c);
	while (c--)
	{
		scanf("%d", &n);
		B = 0;
		while (n != 0)
		{
			if (n % 2 == 1)
			{
				B++;
				n--;
			}
			else
				n = n / 2;
		}
		printf("%d\n",B);
	}
	return 0;
}