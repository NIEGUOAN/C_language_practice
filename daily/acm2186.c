#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main()
{
	int c, n,rescue,medical,communication,wizard;
	scanf("%d", &c);
	while (c--)
	{
		wizard = 0;
		scanf("%d", &n);
		rescue = n / 2;
		medical = (n - rescue) * 2 / 3;
		communication = n - rescue - medical;
		wizard = rescue/10 + medical/10 + communication/10;
		if (rescue % 10 != 0)
			wizard++;
		if (medical % 10 != 0)
			wizard++;
		if (communication % 10 != 0)
			wizard++;
		printf("%d\n", wizard);
	}
	return 0;
}