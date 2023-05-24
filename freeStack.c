#include "monty.h"

/**
* free_stack - function that frees a doubly linked list
* @head: the head pointer to the stack
*
* Return: there is nothing to return
*/
void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
* f_stack - function that prints the top
* @head: head of stack
* @counter: line count
*
* Return: nothing
*/
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
