﻿#pragma warning(disable:4996)
/* charcod.c-显示字符的代码符号 */
#include<stdio.h>
int main()
{
	char ch;

	printf("Please enter a character.\n");
	scanf("%c", &ch);/*用户输入字符*/
	printf("The code for %c is %d.\n", ch, ch);

	return 0;
}