#include <stdio.h>
#define SIZE 5

void enter(char* arr)
{
	for (int i = 0; i < SIZE; ++i)
	{
		scanf(" %c", &arr[i]);
	}
}

void reverse(char* arr)
{
	char swap = 0;
	int j = SIZE - 1;
	for (int i = 0; i < SIZE / 2; ++i, --j)
	{
		swap = arr[i];
		arr[i] = arr[j];
		arr[j] = swap;
	}
}

void print(char* arr)
{
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
}

int main()
{
	char arr[SIZE] = { '\0' };
	enter(arr);
	print(arr);
	reverse(arr);
	print(arr);
	return 0;
}
