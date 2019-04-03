#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int dogs;

	printf("How many dogs do you have?\n");
	scanf("%d", &dogs);
	printf("So you have %d dog(s)!\n", dogs);

	return 0;
}