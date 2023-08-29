#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int sums = 0;
listint_t *temp = head;
while (temp)
{
sums += temp->n;
temp = temp->next;
}
return (sums);
}

