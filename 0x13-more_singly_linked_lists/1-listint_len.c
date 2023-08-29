#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked lists
 * @l: linked list listint_t to traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *l)
{
size_t number = 0;
while (l)
{
number++;
l = l->next;
}
return (number);
}

