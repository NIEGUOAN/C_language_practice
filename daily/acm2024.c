#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)
//不能有空格，首字符不能是数字
int main()
{
	int n;
	char str[100];
	scanf("%d\n", &n);
	while (n--)
	{
		int i = 1;
		int flag = 1;
		fgets(str, 100, stdin);
		if (!isalpha(str[0]) && str[0] != '_')
			flag = 0;
		while (str[i] != '\0' && str[i] != '\n' && flag)
		{
			if (!(isalnum(str[i]) || str[i] == '_'))
				flag = 0;
			i++;
		}
		if (flag)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}