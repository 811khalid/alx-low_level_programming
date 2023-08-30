#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data
 * @headnode: the lead node
 * Return: resulting sum
 */
int sum_listint(listint_t *headnode)
{
int sums = 0;
listint_t *temp = headnode;
while (temp)
{
sums += temp->n;
temp = temp->next;
}
return (sums);
}

