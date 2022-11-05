#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y, z,tem;
	printf("ÊäÈë²ÎÊý");
	scanf("%d%d%d", &x, &y, &z);
	if (x > y)
	{
		tem=x;
		x = y;
		y = tem;
		

	}
	if (y >z)
	{
		tem = y;
		y = z;
		z = tem;
	}
	if (z > x)
	{
		tem = z;
		z = x;
		x = tem;
	}
	printf("%d %d^%d", x,y, z);
		return 0;


}
