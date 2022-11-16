#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
int main()
{
	SetConsoleOutputCP(437);
	char a = 219;
	printf("\1\1\n");
	for (int i = 1; i < 11; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%c%c",a, a);
		}
		printf("\n");

	}
	return 0;
}