#include <stdio.h>
#include "lists.h"
/**
 * listint_len - get len of list
 * Return: size_t
 * @h: list
 */
size_t listint_len(const listint_t *h)
{
	int length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
