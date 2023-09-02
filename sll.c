#include "main.h"

/**
 * sll_create - Create and initialize a singly linked list
 * @data: the initializing data
 * Return: a pointer to the new linked list head
*/
sll *sll_create(int data)
{
	sll *head;
	head = malloc(sizeof(sll));

	if (head == NULL)
	{
		free(head);
		return(NULL);
	}

	head->data = data;
	head->print = sll_print;
	head->len = sll_len;
	head->add = sll_add;
	head->next = NULL;

	return (head);
}