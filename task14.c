#include <stdio.h>

int sum(int num)
{
	int sum = 0;

	while(num != 0)
	{
		sum += num % 10;
		num /= 10;
	}

	return sum;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", sum(num));
}
