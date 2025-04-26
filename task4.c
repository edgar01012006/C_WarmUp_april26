#include <stdio.h>
#define SIZE 7

void enter(char* arr)
{
	for (int i = 0; i < SIZE; ++i)
	{
		scanf(" %c", &arr[i]);
	}
}

void num_in_char(char* arr)
{
	for (int i = 0; i < SIZE; ++i)
	{
		if (arr[i] >= '0' && arr[i] <= '9')
		{
			printf("%c ", arr[i]);
		}
	}
}

int main()
{
	char arr[SIZE] = { '\0' };
	enter(arr);
	num_in_char(arr);
	return 0;
}
