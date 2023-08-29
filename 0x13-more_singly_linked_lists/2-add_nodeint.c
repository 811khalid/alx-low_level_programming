#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to the first node
 * @n: data insert in that new node
 * Return: pointer to the new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newl;
newl = malloc(sizeof(listint_t));
if (!newl)
return (NULL);
newl->n = n;
newl->next = *head;
*head = newl;
return (newl);
}

