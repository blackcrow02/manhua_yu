#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a,i;
	printf("请输入一个数\n");
	scanf("%d", &a);
	printf("%d\n", a);
	for (i = 2; i <= a ; i++)
	{
		while (a % i == 0)
		{
			printf("%d", i);
			a /= i;
			if (a != 1)
				printf("*");
		}

	}
	return 0;
}
