#include <stdio.h>

int f_to_c(int f)
{
	int c = (f - 32) * 5 / 9;
	return c;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("c = %d\n", f_to_c(num));
	return 0;
}
