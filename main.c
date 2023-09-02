#include "main.h"

int main(void)
{
	sll list_copy;
	list_copy.data = 45;
	list_copy.print = print_list;
	list_copy.next = NULL;
	list_copy.print(&list_copy);
	return 0;
}