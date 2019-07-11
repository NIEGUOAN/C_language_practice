#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)

int main()
{
	char str[100] = { 0 };
	int n, j = 0, flag = 1, a = 0, e = 0, i = 0, o = 0, u = 0;
	scanf("%d\n", &n);
	while (n--)
	{
		a = 0;
		e = 0;
		i = 0;
		o = 0;
		u = 0;
		j = 0;
		fgets(str,100,stdin);
		while (str[j] != '\0')
		{
			if (str[j] == 'a')
				a++;
			if (str[j] == 'e')
				e++;
			if (str[j] == 'i')
				i++;
			if (str[j] == 'o')
				o++;
			if (str[j] == 'u')
				u++;
			j++;
		}
		if (flag == 1)
		{
			printf("a:%d\n", a);
			printf("e:%d\n", e);
			printf("i:%d\n", i);
			printf("o:%d\n", o);
			printf("u:%d\n", u);
			flag = 0;
		}
		else
		{
			printf("\n");
			printf("a:%d\n", a);
			printf("e:%d\n", e);
			printf("i:%d\n", i);
			printf("o:%d\n", o);
			printf("u:%d\n", u);
		}
	}
	return 0;
}
