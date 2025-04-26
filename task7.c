#include <stdio.h>
#define SIZE 3

void enter(int* arr)
{
	for (int i = 0; i < SIZE; ++i)
	{
		scanf("%d", &arr[i]);
	}
}

void print_for(int* arr1, int* arr2)
{
	int flag = 0;
	for (int i = 0; i < SIZE; ++i)
	{
		if (flag == 0)
		{
			printf("%d ", arr1[i]);
		}
		else
		{
			printf("%d ", arr2[i]);
		}
		if (i == SIZE - 1 && flag == 0)
		{
			flag = 1;
			i = -1;
		}
	}
}

int main()
{
	int arr1[SIZE] = { 0 };
	int arr2[SIZE] = { 0 };
	enter(arr1);
	enter(arr2);
	print_for(arr1, arr2);

	return 0;
}

