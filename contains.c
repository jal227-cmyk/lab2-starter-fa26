#include <stdio.h>


int contains(int item, int arr[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		int current = arr[i];

		// If we found the item
		if(current == item)
			return 1;
	}

	// Not found
	return 0;

} // end of "contains(int, int[], int)"


int main()
{
	int arr[] = {2, 9, 2, 0, 2, 5};

	// The number we want to find
	int target = 5;

	// 1 if `target` is found in `arr`, 0 otherwise
	int is_found = contains(target, arr, sizeof(arr));

	// Print the result
	// printf("Result: %d\n", is_found);

	if(is_found)
		printf("%d was found! :D \n", target);
	else
		printf("%d was not found! :( \n", target);

	return 0;

} // end of "main()"
