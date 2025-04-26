#include <stdio.h>

void scan(char* arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		scanf(" %c", &arr[i]);
	}
}

void low_to_upp(char* arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			arr[i] = arr[i] - 32;
		}
	}
}

void print(const char* arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%c ", arr[i]);
	}
}

int main()
{
	const int size = 5;
	char arr[size] = { 0 };
	scan(arr, size);
	low_to_upp(arr, size);
	print(arr, size);
	return 0;
}
