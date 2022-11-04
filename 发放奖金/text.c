#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double i;
	double bonus, bonus1, bonus2, bonus3, bonus4, bonus5, bonus10;
	printf(" ‰»Î¿˚»Û\n");
	scanf("%lf", &i);
	bonus = 10 * 0.1;
	bonus1 = bonus + (10 * 0.075);
	bonus2 = bonus1 + (20 * 0.05);
	bonus3 = bonus2 + (20 * 0.03);
	bonus4 = bonus3 + 40 * 0.15;
	if (i < 10)
		bonus10 = i * 0.1;
	else if (i < 20)
		bonus10 = bonus + (i - 10) * 0.075;
	else if (i < 40)
		bonus10 = bonus1 + (i - 20) * 0.05;
	else if (i < 60)
		bonus10 = bonus2 + (i - 40) * 0.3;
	else if (i < 100)
		bonus10 = bonus3 + (i - 60) * 0.15;
	else if (i > 100)
		bonus10 = bonus4 + (i - 100) * 0.01;
	printf("%.2lf\n", bonus10);
	return 0;
}