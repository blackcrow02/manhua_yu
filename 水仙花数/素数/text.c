#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	for (i = 101; i <= 200; i++)
	{
		int j = 2;
		for (j = 2; j <= (i - 1); j++)
		{
			if (i %j == 0)

			{
				break;
			}
		
			
		}
		if(j>(i-1))
		printf("%d\n",i );
		
	}
	return 0;
}