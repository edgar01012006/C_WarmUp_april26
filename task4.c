#include <stdio.h>

void scan(char* arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		scanf(" %c", &arr[i]);
	}
}

void find_nums_in_char(const char* arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] >= '0' && arr[i] <= '9')
		{
			printf("%c ", arr[i]);
		}
	}
}

int main()
{
	const int size = 5;
	char arr[size] = { '\0' };
	scan(arr, size);
	find_nums_in_char(arr, size);
	return 0;
}
