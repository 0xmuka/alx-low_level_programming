#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a double linked list
  * @head: head node
  * @n: new node n data
  *
  * Return: dlistint_t *, address of new node or NULL on failure
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n, newNode->prev = NULL, newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	newNode->next = *head, (*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}

