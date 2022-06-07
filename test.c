#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "sort.h"


typedef void (*sort_func)(int arr[], int nr);

struct sort_func_entry {
	char *name;
	sort_func sort;
};

struct sort_func_entry sort_funcs[] = {
#define ENTRY(sort) { #sort, sort }
	ENTRY(select_sort),
	ENTRY(select_2way_sort),
	ENTRY(bubble_sort),
	ENTRY(bubble_2way_sort),
	ENTRY(insert_sort),
	ENTRY(insert_binary_sort),
	ENTRY(insert_2way_sort),
	ENTRY(heap_sort),
	ENTRY(quick_sort),
	ENTRY(shell_sort),
	ENTRY(merge_sort),
	ENTRY(count_sort),
	ENTRY(radix_sort),
};

int sort_funcs_nr = sizeof(sort_funcs)/sizeof(sort_funcs[0]);

int sorted(int arr[], int nr)
{
	int assend = -1;
	for(int i = 0; i < nr-1; i++){
		if(arr[i] == arr[i+1])
			continue;
		if(arr[i] < arr[i+1]){
			if(assend == -1) assend = 1;
			if(assend == 0) return 0;
		} else {
			if(assend == -1) assend = 0;
			if(assend == 1) return 0;
		}
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	printf("\nUsage: %s [count] \n", argv[0]);
	printf("----------------------------------\n\n");

	int count = 10;
	if (argc > 1)
		count = atoi(argv[1]);
	if (count < 1)
		count = 1;

	int random_ints[count];
	srand(time(NULL));
	printf("create a random array\n");
	for (int i = 0; i < count; ++i)
		random_ints[i] = rand()%count + 1;
	for (int i = 0; i < count; ++i)
		printf("%d ", random_ints[i]);
	printf("\n\n");

	for(int i = 0; i < sort_funcs_nr; i++){
		printf("%s\n", sort_funcs[i].name);
		int arr[count];
		for (int i = 0; i < count; ++i)
			arr[i] = random_ints[i];
		sort_funcs[i].sort(arr, count);
		for (int i = 0; i < count; ++i)
			printf("%d ", arr[i]);
		printf(":%s\n\n", sorted(arr, count) ? "√√√" : "✗✗✗");
	}

	return 0;
}




