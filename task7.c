#include <stdio.h>

void scan(int* arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		scanf("%d", &arr[i]);
	}
}

void print_arr(int* arr1, int* arr2, const int size)
{
	int flag = 0;
	for (int i = 0; i < size; ++i)
	{
		if (flag == 0)
		{
			printf("%d ", arr1[i]);
		}
		else
		{
			printf("%d ", arr2[i]);
		}
		if (i == size - 1 && flag == 0)
		{
			flag = 1;
			i = -1;
		}
	}
}

int main()
{
	const int size = 3;
	int arr1[size] = { 0 };
	int arr2[size] = { 0 };
	scan(arr1, size);
	scan(arr2, size);
	print_arr(arr1, arr2, size);

	return 0;
}

