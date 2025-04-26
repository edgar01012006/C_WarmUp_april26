#include <stdio.h>
#define SIZE 5

void enter(int *arr)
{
	for (int i = 0; i < SIZE; ++i)
	{
		scanf("%d", &arr[i]);
	}
}


int mid(int* arr)
{
	int mid = 0;
	for (int i = 0; i < SIZE; ++i)
	{
		mid += arr[i];
	}

	return mid / SIZE;
}

int main()
{
	int arr[SIZE] = { 0 };
	enter(arr);
	printf("mid = %d", mid(arr));

	return 0;

}
