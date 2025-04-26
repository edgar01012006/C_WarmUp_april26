#include <stdio.h>

void print_table(int num)
{
	for (int i = 1; i <= 9; ++i)
	{
		printf("%d * %d = %d\n", num, i, num * i);
	}
}

int main()
{
	int num = 0; 
	scanf("%d", &num);
	print_table(num);
	return 0;
}
