#include <stdio.h>

void scan(int* arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		scanf("%d", &arr[i]);
	}
}

void find_target(const int* arr, const int target, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == target)
		{
			printf("YES\n");
			return;
		}
	}

	printf("NO\n");
	return;
}

int main()
{
	int target = 0;
	printf("enter target\n");
	scanf("%d", &target);
	const int size = 5;
	int arr[size] = { 0 };
	scan(arr, size);
	find_target(arr, target, size);

	return 0;
}
