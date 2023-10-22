#include "monty.h"
/**
* push - Pushes an element to the stack.
* @stack: Pointer to the stack.
* @line_number: Line number in the file.
*/
void push(stack_t **stack, unsigned int line_number)
{
stack_t *new = NULL;

if (!stack || !(*stack))
return;

new = malloc(sizeof(stack_t));
if (!new)
return;
new->n = line_number;
new->next = *stack;
new->prev = NULL;
*stack = new;


}
