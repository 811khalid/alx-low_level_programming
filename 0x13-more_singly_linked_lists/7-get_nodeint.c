#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node
 * @index: index of the node
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int it = 0;
listint_t *temp = head;
while (temp && it < index)
{
temp = temp->next;
it++;
}
return (temp ? temp : NULL);
}

