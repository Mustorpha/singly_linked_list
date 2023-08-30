#ifndef MAiN_H
#define MAIN_H

#include <stddef.h>

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
typedef struct sll
{
	int data;
	size_t print(const sll *head, char *sep = " ");
	size_t len(const sll *head);
	sll add(const sll *head, const int n);
	sll add_end(const sll *head, const int n);
	int free(sll *head);
	int del(sll *head, size_t index);
	int reverse(sll *head);
	int pop(sll *head);
	sll get(sll *head, size_t index);
	int sum(sll *head);
	int insert(sll *head, size_t index);
}sll;

#endif