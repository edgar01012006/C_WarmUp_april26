#include <stdio.h>

int power(num, exp)
{
	for (int i = 1; i < exp; ++i)
	{
		num *= num;
	}

	return num;
}

int main()
{
	int num = 0; 
	scanf("%d", &num);
	int exp = 0;
	scanf("%d", &exp);
	printf("%d", power(num, exp));
	return 0;
}
