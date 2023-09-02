#include "main.h"

int main(void)
{
	sll *head;
	head = sll_create(45);
	head->add(head, 32);
	head->print(head);
	printf("Total number of element = %lu\n", head->len(head));

	return 0;
}