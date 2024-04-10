#include "search_algos.h"
/**
 * interpolation_search - function that searcheshm
 * @array: pointer to the first element of the ar
 * @size: number of elements
 * @value: value to search for
 * Return: first index where value
 */
int interpolation_search(int *array, size_t size, int value)
{
	int lo = 0;
	int hi = size - 1;
	size_t pos;
	double p;
	if (array == NULL)
		return (-1);

	while (size)
	{
		p = ((double)(hi - lo) / (array[hi] - array[lo])) * (value - array[lo]);
		pos = (size_t)(lo + p);
		printf("Value checked array[%ld]", pos);
		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[pos]);

		if (array[pos] == value)
			return ((int)pos);
		else if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
	}
	return (-1);
}
