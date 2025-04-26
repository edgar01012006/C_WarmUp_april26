#include <stdio.h>
#define SIZE 5

void enter(int* arr)
{
	for (int i = 0; i < SIZE; ++i)
	{
		scanf("%d", &arr[i]);
	}
}

void compare(int* arr1, int* arr2)
{
	for (int i = 0; i < SIZE; ++i)
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
	int arr1[SIZE] = { 0 };
	int arr2[SIZE] = { 0 };
	enter(arr1);
	enter(arr2);
	compare(arr1, arr2);
	return 0;
}
