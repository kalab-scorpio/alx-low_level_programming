#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print list
 * Return: size_t
 * @h: list
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;
	if (h)
	{
		nodes = 1;
		printf("%d\n", h->n);
		while (h->next)
		{
			nodes++;
			printf("%d", h->n);
			printf("\n");
		}
	}
	return (nodes);
}
