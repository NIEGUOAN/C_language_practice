//fathm_ft.c -- 把2英寻转换成英尺
#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int feet, fathoms;

	fathoms = 2;
	feet = 5 * fathoms;
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes,I said %d feet!\n", 6 * fathoms);

	return 0;
}