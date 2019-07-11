#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main()
{
    int n, i, num, len;
    char str[1000];
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        gets(str);
        i = 0;
        num = 0;
        len = strlen(str);
        for (i = 0; i < len; i++)
        {
            if (str[i] < 0)
                num++;
        }
        printf("%d\n", num / 2);
    }
    return 0;
}