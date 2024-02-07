#include "lists.h"

/**
  * dlistint_len - returns the number of nodes in a double linked list
  * @h: head node
  *
  * Return: size_t, number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
		n++, h = h->next;

	return (n);
}

