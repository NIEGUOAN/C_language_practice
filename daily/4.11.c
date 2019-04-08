#pragma warning(disable:4996)
/* intconv.c -- 一些不匹配的整形转换 */
#include<stdio.h>
#define PAGES 336
#define WORDS 65618
int main()
{
	short num = PAGES;
	short mnum = -PAGES;
	printf("num as short and unsigned short: %hd %hu\n", num, num);
	printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
	printf("num as int,short,and char:%d %hd %c\n", num, num);
	printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);

	return 0;
}