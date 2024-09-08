#include "../include/push_swap.h"

void sorttohanderd(t_list **stack, int r_max)
{	
	t_list *stack_b;
	int r_min;

	r_min = 0;
	stack_b = NULL;
	indexing_by_order(*stack);
	while (*stack != NULL)
	{
		
		if ((*stack)->index < r_min && ++r_min & ++r_max)
		{
			pb(&stack_b, stack);
			rb(&stack_b);
		}
		else if (r_min <= (*stack)->index && (*stack)->index <= r_max && ++r_max && ++r_min)

			pb(&stack_b, stack);

		else
			ra(stack);
		
	}
	big_pa(stack, &stack_b);
}

void big_pa(t_list **stack, t_list **stack_b)
{
	int higher;

	while (*stack_b != NULL)
	{
		higher = higher_int(*stack_b);
		while (*((int *)((*stack_b)->content)) != higher)
		{
			if (index_of_higher(*stack_b) <= ft_lstsize(*stack_b)/2)
				rb(stack_b);
			else 
				rrb(stack_b);
		}
		pa(stack, stack_b);
	}
}

// this function take the header of linked list and return the index of higher int in the linked list
int index_of_higher(t_list *stack)
{
	int i;
	int higher;

	higher = higher_int(stack);
	i = 0;
	while (stack != NULL)
	{
		if (*((int *)(stack->content)) != higher)
			i++;
		else
			break;
		stack = stack->next;
	}
	return (i);
}

// this function take the header of linked list and indexing by order for lower to higher
void indexing_by_order(t_list *stack)
{
	int *x;
	int i;
	t_list *y;

	i = 0;
	y = stack;
	x = malloc(ft_lstsize(stack) * 4);
	if (x == NULL)
		return ;
	while (y != NULL)
	{
		x[i++] = *((int *)(y->content));	
		y = y->next;
	}
	array_sort(x);
	i = 0;
	while (i < ft_lstsize(stack))
	{
		y = stack;
		while (*((int *)(y->content)) != x[i])
			y = y->next;
		y->index = i++;
	}
}

void array_sort(int *x)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (x[i])
	{
		j = 0;
		while (x[j])
		{
			if (x[i] < x[j])
			{
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
			j++;
		}
		i++;
	}
}
