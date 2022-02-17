#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a; array to reverse.
 * @n: number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int m;

	while (( i <= n && j >= 0) && (j > i))
	{
		m = a[i];
		a[i] = a[j];
		a[j] = m;
		i++;
		j--;
	}
}
