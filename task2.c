#include <stdio.h>

void scan(int *arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		scanf("%d", &arr[i]);
	}
}


int average(const int* arr, const int size)
{
	int av = 0;
	for (int i = 0; i < size; ++i)
	{
		av += arr[i];
	}

	return av / size;
}

int main()
{
	const int size = 5;
	int arr[size] = { 0 };
	scan(arr, size);
	printf("average = %d\n", average(arr, size));

	return 0;

}
