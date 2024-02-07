#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a double linked list
  * @head: pointer to a pointer of the head node
  * @n: integer, list n data
  *
  * Return: dlistint_t *, pointer to new node or NULL on failure
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *currentNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n, newNode->prev = NULL, newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	currentNode = *head;

	while (currentNode && currentNode->next)
		currentNode = currentNode->next;

	currentNode->next = newNode, newNode->prev = currentNode;

	return (newNode);
}

