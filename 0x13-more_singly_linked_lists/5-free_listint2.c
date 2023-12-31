#include "lists.h"

/**
 * free_listint2 - Will free a linked list
 * @head: The pointer to listint_t list that will be freed
 */

void free_listint2(listint_t **head)

{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
