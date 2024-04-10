#include "search_algos.h"

/**
 * linear_search -  function that search using the Linear search algorithm
 * @array: pointer to the first element
 * @size: number of element
 * @value: value to search
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
size_t in = 0;
if (array == NULL)
	return (-1);
for (in = 0; in < size; in++)
	{
	printf("Value checked array[%lu] = [%d]\n", in, array[in]);
	if (array[in] == value)
	{
	return (in);
	}
	}
	return (-1); 
}
