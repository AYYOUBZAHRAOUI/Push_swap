
#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include "../libft/include/libft.h"

// error_handling.c file have 2 function
int verif1(char *x);
int verif2(t_list *lst, long int k);

// input_file.c have 5 functions
t_list *creat_stacka(int narg, char **argv);

// basic_operations.c
int swap(t_list **p);
int rotate(t_list **p);
int rv_rotate(t_list **p);
int push(t_list **x, t_list **y);

// operations
void sa(t_list **stacka);
void sb(t_list **stackb);
void ss(t_list **stacka, t_list **stackb);
void pa(t_list **stacka, t_list **stackb);
void ra(t_list **stacka);
void rb(t_list **stackb);
void rr(t_list **stacka, t_list **stackb);
void rra(t_list **stacka);
void rrb(t_list **stackb);
void rrr(t_list **stacka, t_list **stackb);

// algo functions
int median_stack(t_list *stacka);
int higher_int(t_list *stack);
void first_algo(t_list *stacka);

#endif