#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a double linked list
  * @head: pointer to the head node
  * @index: integer, node position to return
  *
  * Return: dlistint_t * at nth node or NULL if none
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (n < index && head)
		head = head->next, n++;

	return (head);
}

