#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y, z;
	int count = 0;

	for (x = 1; x < 5; x++)
	{
		for (y = 1; y < 5; y++)
		{
			for (z = 1; z < 5; z++)
			{
				if (x != y && y != z && x != z)
				{
					printf("%d%d%d\n", x, y, z);
					count++;
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}