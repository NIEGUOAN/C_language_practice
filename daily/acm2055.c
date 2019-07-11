#include <stdio.h>
#include <ctype.h>
#pragma warning(disable:4996)
int main()
{
	freopen("in.txt", "r", stdin);
	char str;
	int num, sum = 0, n;
	scanf("%d\n", &n);
	while (n--)
	{
		scanf("%c %d\n", &str, &num);
		if (isupper(str))
			sum = (int)str - 'A' + 1 + num;
		if (islower(str))
			sum = -((int)str - 'a' + 1) + num;
		printf("%d\n", sum);
	}
	return 0;
}
