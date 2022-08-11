#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list
 * @head: adress of first node
 * @str: address of new node
 * Return: new node address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp2;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

		temp->str = strdup(str);
		if (temp->str == NULL)
		{
			free(temp);
			return (NULL);
		}
		while (str[length])
			length++;
		temp->len = length;
		temp->next = NULL;

		if (*head == NULL)
		{
			*head = temp;
			return (temp);
		}

		temp2 = *head;
		while (temp2->next)
			temp2 = temp2->next;
		temp2->next = temp;
		return (temp);
}
