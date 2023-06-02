#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node of a linked list
 * @head: double pointer of the list_t
 * @str: new stringto add in the node
 *
 * Return: the address of the element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
