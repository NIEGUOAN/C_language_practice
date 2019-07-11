#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)
int main()
{
	char str[100];
	while (scanf("%s", &str) != EOF)
	{
		str[0] = toupper(str[0]);
		printf("%s", str);
		putchar(getchar());
	}
	return 0;
}