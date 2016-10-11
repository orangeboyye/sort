#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "sort.h"

#define COUNT 10

int main(int argc, char const *argv[])
{
	printf("\n");
	printf("----------------------------------\n");
	printf("\n");

	int count = COUNT;
	if (argc > 1)
		count = atoi(argv[1]);
	if (count < 1)
		count = 1;

	int tmp[count];
	srand(time(NULL));
	printf("new an array randomly\n");
	for (int i = 0; i < count; ++i)
		tmp[i] = rand()%count + 1;
	for (int i = 0; i < count; ++i)
		printf("%d ", tmp[i]);
	printf("\n");
	printf("\n");

	int arr[count];
	for (int i = 0; i < count; ++i)
		arr[i] = tmp[i];
	select_sort(arr, count);
	printf("%s\n", "select sort");
	for (int i = 0; i < count; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	printf("\n");

	for (int i = 0; i < count; ++i)
		arr[i] = tmp[i];
	select_2way_sort(arr, count);
	printf("%s\n", "two way select sort");
	for (int i = 0; i < count; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	printf("\n");

	for (int i = 0; i < count; ++i)
		arr[i] = tmp[i];
	bubble_sort(arr, count);
	printf("%s\n", "bubble sort");
	for (int i = 0; i < count; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	printf("\n");

	for (int i = 0; i < count; ++i)
		arr[i] = tmp[i];
	bubble_2way_sort(arr, count);
	printf("%s\n", "two direction bubble sort");
	for (int i = 0; i < count; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	printf("\n");

	for (int i = 0; i < count; ++i)
		arr[i] = tmp[i];
	insert_sort(arr, count);
	printf("%s\n", "insert sort");
	for (int i = 0; i < count; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	printf("\n");

	for (int i = 0; i < count; ++i)
		arr[i] = tmp[i];
	insert_binary_sort(arr, count);
	printf("%s\n", "binary insert sort");
	for (int i = 0; i < count; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	printf("\n");

	for (int i = 0; i < count; ++i)
		arr[i] = tmp[i];
	insert_2way_sort(arr, count);
	printf("%s\n", "two way insert sort");
	for (int i = 0; i < count; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	printf("\n");

	for (int i = 0; i < count; ++i)
		arr[i] = tmp[i];
	heap_sort(arr, count);
	printf("%s\n", "heap sort");
	for (int i = 0; i < count; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	printf("\n");

	for (int i = 0; i < count; ++i)
		arr[i] = tmp[i];
	quick_sort(arr, 0, count-1);
	printf("%s\n", "quick sort");
	for (int i = 0; i < count; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	printf("\n");

	for (int i = 0; i < count; ++i)
		arr[i] = tmp[i];
	shell_sort(arr, count);
	printf("%s\n", "shell sort");
	for (int i = 0; i < count; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	printf("\n");

	for (int i = 0; i < count; ++i)
		arr[i] = tmp[i];
	merge_sort(arr, 0, count-1);
	printf("%s\n", "merge sort");
	for (int i = 0; i < count; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	printf("\n");

	for (int i = 0; i < count; ++i)
		arr[i] = tmp[i];
	count_sort(arr, count);
	printf("%s\n", "count sort");
	for (int i = 0; i < count; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	printf("\n");

	return 0;
}




