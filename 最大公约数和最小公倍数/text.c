#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b,n,r;
	printf("请输入两个数");
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		int t = a;
		a = b;
		b = t;

	}
	r = a % b;
	n = a * b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	printf("%d %d", b, (n/b));
	
}