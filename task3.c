#include <stdio.h>
#define SIZE 5

void enter(int* arr)
{
	for (int i = 0; i < SIZE; ++i)
	{
		scanf("%d", &arr[i]);
	}
}

void target_found(int* arr, int target)
{
	for (int i = 0; i < SIZE; ++i)
	{
		if (arr[i] == target)
		{
			printf("YES\n");
			return;
		}
	}

	printf("NO\n");
}

int main()
{
	int target = 0;
	scanf("%d", &target);

	int arr[SIZE] = { 0 };
	enter(arr);
	target_found(arr, target);

	return 0;
}
