#ifndef MAiN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sll - A Singly Linked List Structure
 * @data: the stored data in the list
 * @print: prints all data in each element of the list
 * @len: returns the total element in the list
 * @add: insert an element at the beginning of the list
 * @add_end: insert an element at the end of the list
 * @free: deallocates memory for the list
 * @del: deletes an element at a certain index
 * @reverse: reverse the order of the list
 * @pop: removes the first element of the list
 * @get: returns a pointer to the element at the given index
 * @sum: sum up all the data in each element of the list
 * @insert: add an element at at a certain index of the list
*/
typedef struct singly_linked_list
{
	int data;
	size_t (*print)(const struct singly_linked_list *);
	size_t (*len)(const struct singly_linked_list *);
	sll (*add)(sll *, const int);
	//sll (*add_end)(const sll *, const int);
	//int (*free)(sll *);
	//int (*del)(sll *, size_t);
	//int (*reverse)(sll *);
	//int (*pop)(sll *);
	//sll (*get)(sll *, size_t);
	//int (*sum)(sll *);
	//int (*insert)(sll *, size_t);
	struct singly_linked_list *next;
}sll;

size_t sll_print(const sll *head);
size_t sll_len(const sll *head);
sll *sll_create(int data);
sll *sll_add(sll *head, const int n);

#endif