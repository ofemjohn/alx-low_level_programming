#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 * @head: Pointer to the actual position of the linked list (struct)
 * @str: String to allocate as a new element
 *
 *Return: Size of the linked_list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	{
		list_t *new;
		list_t *last;
		int i = 0;

		if (head == NULL)
			return (NULL);

		new = malloc(sizeof(list_t));

		if (new == NULL);

		return (NULL);

		new->str = strdup(str);
		for (i = 0; str[i] != '\0'; i++)
			;
		new->len = i;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}

		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new;
		return (*head);
	}
