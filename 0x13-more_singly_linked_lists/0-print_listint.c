#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list
 * Return: number of nodes produced
 */
size_t print_listint(const listint_t *l)
{
size_t number = 0;
while (l)
{
printf("%d\n", l->n);
number ++;
l = l->next;
}
return (number);
}

