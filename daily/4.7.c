﻿#pragma warning(disable:4996)
/* width.c -- 字段宽度 */
#include<stdio.h>
#define PAGES 959
int main()
{
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%10d*\n", PAGES);
	printf("*%-10d*\n", PAGES);
	
	return 0;
}