## MORE SINGLY LINKED LIST

0. a function that prints all the elements of a listint_t list.
Return: the number of nodes
Format: see example
You are allowed to use printf
1. A function that returns the number of elements in a linked listint_t list.
2. A function that adds a new node at the beginning of a listint_t list.
Return: the address of the new element, or NULL if it failed.
3. a function that adds a new node at the end of a listint_t list.
Return: the address of the new element, or NULL if it failed
4. a function that frees a listint_t list.
5.  a function that frees a listint_t list.
The function sets the head to NULL..Description: at the end, the head will point to NULL.
 as we know the tail always points to NULL, we will
 * So, * be moving a temp pointer, free its memory if not NULL
 * Untill we reach the tail
6. a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
if the linked list is empty return 0
7. function that returns the nth node of a listint_t linked list.
where index is the index of the node, starting at 0
if the node does not exist, return NULL
8. a function that returns the sum of all the data (n) of a listint_t linked list.
if the list is empty, return 0
9. a function that inserts a new node at a given position.
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL
10. a function that deletes the node at index index of a listint_t linked list.
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed