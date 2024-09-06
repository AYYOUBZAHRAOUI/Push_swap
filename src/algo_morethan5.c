#include "../include/push_swap.h"

// the range algo
// 1. indexing all nodes by order starting from 0 to end-1
// 2. chose a range starting form 0 like (0 to 13) or (0 to 20)
// 3. loop to the linked list
// 4. check in the index of node in the range of less than the range or greater than range
// 5. if index of node less than rage do (pb rb) and range++
// 6. else if index of node in the range do (pb) and range++
// 5. else if index of node greater than range do (ra)
// this loop while take the stack a empty
// 7. indexing the stack b not by order just by place in the size
// 8. find the index higher node in the stack b
// 9. if higher node index less and stack_b size divided by 2 do rb
// -> to find the higher and pa
// 10. else do rrb ot find the higher and pa
// ??!! 7 8 9 10 in loop to empty the stalk_b

void sorttohanderd(t_list *stack, int r_max)
{	
	t_list *stack_b;
	int r_min;

	r_min = 0;
	stack_b = NULL;
	
	while (stack != NULL)
	{
		if (stack->index < r_min && ++r_min & ++r_max)
		{
			pb(&stack_b, &stack);
			rb(&stack_b);
		}
		else if (r_min <= stack->index && stack->index <= r_max && ++r_max && ++r_min)
			pb(&stack_b, &stack);
		else
			ra(&stack);
		
	}
	big_pa(stack, stack_b);
}

void big_pa(t_list *stack, t_list *stack_b)
{
	int higher;

	while (stack_b != NULL)
	{
		higher = higher_int(stack_b);
		if (index_of_higher(stack_b) <= ft_lstsize(stack_b)/2)
		{
			while (*((int *)(stack_b->content)) != higher)
			{
				rb(&stack_b);
			}
			pa(&stack, &stack_b);
		}
		else 
		{
			while (*((int *)((ft_lstlast(stack_b))->content)) != higher)
				rrb(&stack_b);
			rrb(&stack_b);
			pa(&stack, &stack_b);
		}
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


// this function take the header of linked list and indexing by order for lower to higher
// how to do that
// crete a node x variable and point in header
// compare x withe all node in linked list if x grater change and i++ x else i++;
// when you finish the last argument in x take index number 
// void indexing_by_order(t_list *stack)
// {
// 	t_list *x;
// 	t_list *y;
// 	int i;
// 	int l_higher;

// 	i = ft_lstsize(stack);
// 	// printf("hello: i=%i\n", i);
// 	l_higher = higher_int(stack);
// 	while (--i + 1)
// 	{
// 		// printf("hello: i=%i\n", i);
// 		x = stack->next;
// 		y = stack;
// 		while (x != NULL)
// 		{
			
// 			if (*((int *)(y->content)) < *((int *)(x->content)) && *((int *)(x->content)) < l_higher)
// 				y = x;
// 			x = x->next;
// 		}
// 		// printf("hello: i=%i\n", i);
// 		y->index = i;
// 		// printf("hello: i=%i\n", y->index);
// 		l_higher = *((int *)(y->content));
// 		// printf("hello: i=%i\n", y->index);
// 	}
// }