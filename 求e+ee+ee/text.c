#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int s = 0, a, n, t;
	printf("请输入数字和次数\n");
	scanf("%d %d", &a, &n);
	t = a;
	while (n > 0)
	{
		s += t;
		a = a * 10;
		t += a;
		n--;
	}
	printf("%d", s);
	return 0;
}