# singly_linked_list
<code>SLL: </code> An implementation of the singly linked list structure in C Language. The implementation assumes an integer for the stored data, which can be modified to any data type as suited to the need of the user. The associated function can also be as suitable if a custom function is available. The Linked list can be called independently which assumes that the user with assign their custom function for each action possible for the list. Or the user can call the <code>sll_create(int first_element_data)</code> function to automatically assign the default function for each action that can be taken on the list.

# Structure memebers
<code>sll.data: </code> This is the data held in the each member of the structure.
<br>
<code>sll.print(const sll *head): </code> This is a function that prints all the data in each element of the list.
<br>
<code>sll.len(const sll *head): </code> This function returns the total number of elements in the linked list.
<br>
<code>sll.add(const sll *head): </code> This function adds a new node for a new element at the beginning of the linked list structure. Therefore the new node becomes the new head of the list. It returns a pointer to the new element.
<br>
<code>sll.add_end(const sll *head): </code> This is function that performs same operation on the linked list, except it add the new node at the very end. Therefore the new node will mark the new end of the list. It returns a pointer to the element.
<br>
<code>sll.free(sll *head): </code> This function deallocates the memory for a linked list in the heap, if the list was previously allocated some memory upon creation. Returns the number of element in freed list.
<br>
<code>sll.del(sll *head, size_t index): </code> This is a function that deletes the entire node at a certain index in the linked list. Returns 1 on success or -1 if call failed.
<br>
<code>sll.reverse(sll *head): </code> This function reverses the list memebers in oppsite order. Returns a pointer to the first element of the list.
<br>
<code>sll.pop(sll *head): </code> This function removes the first element of the list, and set the head to the next element in the list. Returns a pointer to the first element of the current list.
<br>
<code>sll.get(sll *head, size_t index): </code> This function searches for the element in the specified index. Returns a pointer to the element.
<br>
<code>sll.sum(sll *head, size_t index): </code> This function add up all the value held in the data member of each element of the list. Returns the calculated total.
<br>
<code>sll.insert(sll *head, size_t index): </code> This function insert node at a certain index in the list.
<br>
<code>sll.next: </code> The function shifts the head label from the current head node to the next node.
<br>

# Author
<ul>
    <li>Mustorpha Jamiu</li>
    <li><a href="https://www.linkedin.com/in/mustorpha-jamiu" target="_blank">Connect with me on LinkedIn</li>
    <li><a href="https://twitter.com/MustorphaJamiu">Connect with me on Twitter</li>
</ul>