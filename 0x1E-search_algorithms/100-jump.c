#include "search_algos.h"
#include <math.h>

/**
 * jump_search -  function that searches for a value in a sorted array of
 * integers  using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a;
	int prev, k = 0;
	int step = sqrt(size);
	size_t cur;
	prev = cur = 0;
	if (array == NULL || size == 0)
		return (-1);
	do
	{
		printf("Value checked array[%ld] = [%d]\n", cur, array[cur]);
		if (array[cur] == value)
			return (cur);
		k++;
		prev = cur;
		cur = k * step;
	} while (cur < size && array[cur] < value);

	printf("Value found between indexes [%d] and [%ld]\n", prev, cur);
	for (a = prev; a <= cur && a < size; a++)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}
