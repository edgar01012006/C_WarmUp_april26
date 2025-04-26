#include <stdio.h>
#define SIZE 7

void enter(char* arr)
{
	for (int i = 0; i < SIZE; ++i)
	{
		scanf(" %c", &arr[i]);
	}
}

void Upp(char* arr)
{
	for (int i = 0; i < SIZE; ++i)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			arr[i] = arr[i] - 32;
		}
	}
}

void print(char* arr)
{
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%c ", arr[i]);
	}
}

int main()
{
	char arr[SIZE] = { 0 };
	enter(arr);
	Upp(arr);
	print(arr);
	return 0;
}
