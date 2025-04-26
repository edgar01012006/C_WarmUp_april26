#include <stdio.h>

int rev_num(int num)
{
	int ten = 1;
    int num_copy = num;
	int rev = 0;
	while(num_copy != 0)
	{
		num_copy /= 10;
		ten *= 10;
	}

	while(ten != 1)
	{
		ten /= 10;
		rev += (num % 10) * ten;
		num /= 10;
	}
	//printf("rev = %d\n", rev);
	return rev;
}

int is_palin(int num)
{
	int rev = rev_num(num);

	while(num != 0)
	{
		if (num % 10 != rev % 10)
		{
			return 0;
		}
		num /= 10;
		rev /= 10;
	}

	return 1;
}

int con(int num, int cnt)
{
	if (is_palin(num) == 1)
	{
		return cnt;
	}
	num += rev_num(num);
	++cnt;
	return con(num, cnt);

}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", con(num, 0));
	return 0;
}
