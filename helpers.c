#include "main.h"

/**
 * print - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * @sep: preffered seperator
 * Return: new_node
 */
size_t sll_print(const sll *head)
{
	sll *h_tmp;
	size_t counter = 0;
	h_tmp = malloc(sizeof(sll));
	
	if (h_tmp == NULL)
	{
		free(h_tmp);
		return(-1);
	}

	*h_tmp = *head;
	h_tmp->data = 56;

	while (h_tmp != NULL)
	{
		printf("[%lu] %d\n",counter, h_tmp->data);
		counter++;
		h_tmp = h_tmp->next;
		if (!h_tmp)
			return(-1);
	}

	free(h_tmp);
	return (counter);
}

/**
 * sll_len - finds the number of elements in a linked lists
 * @head: a pointer to the linked list
 * Return: number of nodes
 */
size_t sll_len(const sll *head)
{
	sll *h_tmp;
	size_t count = 0;

	h_tmp = malloc(sizeof(sll));
	if (h_tmp == NULL)
	{
		free(h_tmp);
		exit(98);
	}

	*h_tmp = *head;

	while (h_tmp)
	{
		count++;
		h_tmp = h_tmp->next;
	}

	free(h_tmp);
	return (count);
}

/**
 * sll_add - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @data: data to insert in the new node
 * Return: pointer to the new node (success), NULL (failure)
 */
sll *sll_add(sll *head, const int data)
{
	sll *new;

	new = malloc(sizeof(sll));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->data = data;
	new->next = head;
	head = new;

	return (new);
}