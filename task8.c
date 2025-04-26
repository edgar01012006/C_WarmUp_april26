#include <stdio.h>
#define SIZE1 3
#define SIZE2 4

void scan(int* arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		scanf("%d", &arr[i]);
	}
}

void print_arr_backwards(int* arr1, int* arr2, const int size1, const int size2)
{
	int flag = 0;
	for (int i = size1 - 1; i >= 0; --i)
	{
		if (flag == 0)
		{
			printf("%d", arr1[i]);
		}
		else
		{
			printf("%d", arr2[i]);
		}
		if (flag == 0 && i == 0)
		{
			i = size2;
			flag = 1;
		}
	}
}

int main()
{
	const int size1 = 3;
	const int size2 = 4;
	int arr1[size1] = { 0 };
	int arr2[size2] = { 0 };
	scan(arr1, size1);
	scan(arr2, size2);
	print_arr_backwards(arr1, arr2, size1, size2);
	return 0;
}

