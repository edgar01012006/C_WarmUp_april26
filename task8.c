#include <stdio.h>
#define SIZE1 3
#define SIZE2 4

void enter1(int* arr)
{
	for (int i = 0; i < SIZE1; ++i)
	{
		scanf("%d", &arr[i]);
	}
}

void enter2(int* arr)
{
	for (int i = 0; i < SIZE2; ++i)
	{
		scanf("%d", &arr[i]);
	}
}

void print_for_back(int* arr1, int* arr2)
{
	int flag = 0;
	for (int i = SIZE1 - 1; i >= 0; --i)
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
			i = SIZE2;
			flag = 1;
		}
	}
}

int main()
{
	int arr1[SIZE1] = { 0 };
	int arr2[SIZE2] = { 0 };
	enter1(arr1);
	enter2(arr2);
	print_for_back(arr1, arr2);
	return 0;
}

