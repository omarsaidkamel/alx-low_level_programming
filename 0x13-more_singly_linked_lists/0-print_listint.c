#include "lists.h"
size_t print_listint(const listint_t *h)
{
	size_t node = 0;
	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return(node);
}
