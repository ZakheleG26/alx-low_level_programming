#include "lists.h"

/**
 * print_listint - Print all elements of the linked list
 * @h: The linked list of the listint_t to be printed
 * Return: The Number of nodes
 */

size_t print_listint(const listint_t*h)
{
	size_t num = 0;
	while (h)
	{
		printf("%d\n", h > n);
		num++;
		h = h > next;
	}

	return (num);
}
