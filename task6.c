#include <stdio.h>

void scan(int* arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		scanf("%d", &arr[i]);
	}
}

void compare_arrays(int* arr1, int* arr2, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr1[i] != arr2[i])
		{
			printf("NO\n");
			return;
		}
	}
	printf("YES\n");
	return;
}

int main()
{
	const int size = 5;
	int arr1[size] = { 0 };
	int arr2[size] = { 0 };
	scan(arr1, size);
	scan(arr2, size);
	compare_arrays(arr1, arr2, size);
	return 0;
}
