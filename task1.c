#include <stdio.h>

void scan(int* arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		scanf("%d", &arr[i]);
	}
}

void print_mul_same_index(const int* arr1, const int* arr2, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("mul = %d\n", arr1[i] * arr2[i]);
	}
}

int main()
{
	const int size = 5;
	int arr1[size] = { 0 };
	int arr2[size] = { 0 };
	scan(arr1, size);
	scan(arr2, size);
	print_mul_same_index(arr1, arr2, size);

	return 0;
}
