#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
int main()
{
    int n, i, num;
    char str[1000];
    scanf("%d", &n);
    while (n--)
    {
        i = 0;
        num = 0;
        scanf("%s", str);
        while (str[i] != '\0')
        {
            if (str[i] >= '0' && str[i] <= '9')
                num = num + 1;//统计数字
            i++;//准备读取下一个
        }
        printf("%d\n", num);
    }

    return 0;
}