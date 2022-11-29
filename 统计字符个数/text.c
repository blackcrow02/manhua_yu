#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char c;
	int number=0, spaces=0, orther=0, light=0;
	printf("请输入一个字符串");
	

	while((c = getchar()) != '\n')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			light++;
		}
		else if (c >= '0' && c <= '9')
		{
			number++;

		}
		else if (c == ' ')
		{
			spaces++;
		}
		else
		{
			orther++;
		}
	}
	printf("空格：%d 字母：%d 数字：%d 其他：%d", spaces, light, number, orther);
	return 0;
}