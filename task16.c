#include <stdio.h>

void scan(char* arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		scanf(" %c", &arr[i]);
	}
}

void reverse_arr(char* arr, const int size)
{
	char swap = 0;
	int j = size - 1;
	for (int i = 0; i < size / 2; ++i, --j)
	{
		swap = arr[i];
		arr[i] = arr[j];
		arr[j] = swap;
	}
}

void print(const char* arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
}

int main()
{
	const int size = 5;
	char arr[size] = { '\0' };
	scan(arr, size);
	print(arr, size);
	reverse_arr(arr, size);
	print(arr, size);
	return 0;
}
