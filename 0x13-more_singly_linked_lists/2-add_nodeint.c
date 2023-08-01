#include "lists.h"

/**
 * add_nodeint - Will add the new node at the beginning the linked list
 * @head: Pointer to the first node in the list
 * @n: The data to be inserted into that new node
 * Return: The pointer to new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
