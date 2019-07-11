#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)

int main()
{
	char str[50];
	int c;
	char temp;
	scanf("%d", &c);
	while (c--)
	{
		scanf("%s", str);
		for (int i = 0; str[i] != '\0'; i = i + 2)
		{
			if (str[i] != str[i + 1])
			{
				temp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = temp;
			}
		}
		for (int j = 0; str[j] != '\0'; j++)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}
	return 0;
}