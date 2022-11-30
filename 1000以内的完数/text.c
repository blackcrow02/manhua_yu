#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int  s;
	for(s = 1; s < 1000; s++)
	{
		int sum = 0;
		for (int i = 1; i <= s / 2; i++)
		{
			if (s % i == 0)
				sum += i;
			if (sum == s)
			{
				printf("%d\n", s);
			}
		}
	}
	return 0;
}