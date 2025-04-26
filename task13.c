#include <stdio.h>

int factorial(int num)
{
	int f = 1;
	for (int i = 1; i <= num; ++i)
	{
		f *= i;
	}
	return f;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", factorial(num));
	return 0;
}
