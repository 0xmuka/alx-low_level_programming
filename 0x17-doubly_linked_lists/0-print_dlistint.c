#include "lists.h"

/**
  * print_dlistint - print a double linked list
  * @h: head of the linked list
  *
  * Return: size_t, size of the linked list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
		printf("%d\n", h->n), n++, h = h->next;

	return (n);
}

