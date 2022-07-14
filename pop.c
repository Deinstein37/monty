#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @stack: double pointer to the head of the stack
 * @line_number: the number of the line in file
 *
<<<<<<< HEAD
 * Return: voide
=======
 * Return: void
>>>>>>> 2dc63df85464b04d723634b59b27d0aa7dcca65a
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
	{
<<<<<<< HEAD
	printf("L%u: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
=======
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
>>>>>>> 2dc63df85464b04d723634b59b27d0aa7dcca65a
	}

	temp = *stack;
	*stack = (*stack)->next;

	free(temp);
}
