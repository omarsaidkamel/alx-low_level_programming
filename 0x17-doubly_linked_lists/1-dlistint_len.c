#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h);
{
	const dlistint_t *node = h;
	size_t conut = 0;

	while (node)
	{
		conut++;
		node = node->next;
	}
	return (conut);
}
