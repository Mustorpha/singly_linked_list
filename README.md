# singly_linked_list
<code>SLL</code>: An implementation of the singly linked list structure in C Language.
# Structure memebers
<code>sll.data</code>: This is the data held in the each member of the structure.
<code>sll.print(const sll *head, char *sep = " ")</code>: This is a function that prints all the data in each element of the list, with the specify character as the separator, or space as default.
<code>sll.len(const sll *head)</code>: This function returns the total number of elements in the linked list
<code>sll.add(const sll *head)</code>: This function adds a new node for a new element at the beginning of the linked list structure. Therefore the new node becomes the new head of the list. It returns a pointer to the new element.
<code>sll.add_end(const sll *head)</code>: This is function that performs same operation on the linked list, except it add the new node at the very end. Therefore the new node will mark the new end of the list. It returns a pointer to the element
<code>sll.free(sll *head)</code>: This function deallocates the memory for a linked list in the heap, if the list was previously allocated some memory upon creation. Returns the number of element in freed list
<code>sll.del(sll *head, size_t index)</code>: This is a function that deletes the entire node at a certain index in the linked list. Returns 1 on success or -1 if call failed
<code>sll.reverse(sll *head)</code>: This function reverses the list memebers in oppsite order. Returns a pointer to the first element of the list
<code>sll.pop(sll *head)</code>: This function removes the first element of the list, and set the head to the next element in the list. Returns a pointer to the first element of the current list
<code>sll.get(sll *head, size_t index)</code>: This function searches for the element in the specified index. Returns a pointer to the element
<code>sll.sum(sll *head, size_t index)</code>: This function add up all the value held in the data member of each element of the list. Returns the calculated total.