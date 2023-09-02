#include "main.h"

int main(void)
{
	sll list_copy;
	sll *head = &list_copy;
	list_copy.data = 45;
	list_copy.print = print_list;
	list_copy.print(head, '\n');
	return 0;
}