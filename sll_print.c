#include "main.h"

/**
 * print - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * @sep: preffered seperator
 * Return: new_node
 */
size_t print_list(const sll *head)
{
	const sll *h_tmp = NULL;
	size_t counter = 0;

	while (head != NULL)
	{
		printf("[%lu] %d\n",counter, head->data);
		counter++;
		head = head->next;
		if (!head)
			exit(98);
	}
	return (counter);
}