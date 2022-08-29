#include "search_algos.h"

/**
 * print_array - print all elements of array of integers
 * @array: pointer to the first element of the array to print its elements
 * @size: number of elements in the array
 * Return: Nothing
 */
void print_array(const int *array, size_t size, unsigned int start)
{
	size_t i;

	if (array != NULL)
	{
		for (i = start; i <= size; i++)
		{
			printf("%d", array[i]);
			if (i < size)
				printf(", ");
		}
		printf("\n");
	}
}


/**
 * binary_search - searches for a value in a sorted array of integers/
 * using the Binary search algorithm
 * @array: pointer to the first element of @array
 * @size: number of elements in @array
 * @value: the value to search for
 * Return: the index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int index, limit, mid;

	if (array == NULL)
		return (-1);
	limit = size - 1;
	index = 0;
	while (index <= limit)
	{
		mid = floor((index + limit) / 2);
		/*mid = floor((index + limit) / 2);*/
		printf("Searching in array: ");
		print_array(array, limit, index);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			index = mid + 1;
			/**array = (mid + 1);
			binary_search(array, (size - mid), value);*/
		}
		else
			limit = mid - 1;
			/*binary_search(array, mid, value);*/
	}
	return (-1);
}
