#pragma warning(disable:4996)
/* prntval.c -- printf() 的返回值 */
#include<stdio.h> 
int main()
{
	int bph2o = 212;
	int rv;

	rv = printf("%d F is water's boiling point.\n", bph2o);
	printf("The printf() function printed %d character.\n", rv);
	return 0;
}
