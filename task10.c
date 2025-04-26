#include <stdio.h>

int fib(int num)
{
	if (num == 0 || num == 1)
	{
		return num;
	}
	int fib1 = 0;
	int fib2 = 1;
	int fib_n = fib1 + fib2;

	for(int i = 2; i < num; ++i)
	{
		int swap = fib_n;
		fib_n += fib2;
		fib1 = fib2;
		fib2 = swap;
	}

	return fib_n;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", fib(num));
	return 0;
}
