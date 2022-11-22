#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	printf("ÊäÈë³É¼¨\n");
	scanf("%d", &i);
	printf("%d\n", i);
	int grade = (i > 90 ? 'A' : (i >= 60 ? 'B' : 'C'));
	printf("%c", grade);
}