#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to the first element in the list
 * @num: data insert in the new element
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int num)
{
listint_t *newl;
listint_t *temp = *head;
newl = malloc(sizeof(listint_t));
if (!newl)
return (NULL);
newl->num = num;
newl->next = NULL;
if (*head == NULL)
{
*head = newl;
return (newl);
}
while (temp->next)
temp = temp->next;
temp->next = newl;
return (newl);
}

