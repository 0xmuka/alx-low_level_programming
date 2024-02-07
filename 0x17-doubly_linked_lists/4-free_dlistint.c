#include "lists.h"

/**
  * free_dlistint - frees a double linked list
  * @head: pointer to a double linked list
  *
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head)
		next = head->next, free(head), head = next;
}

