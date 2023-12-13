/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:24:03 by ounal             #+#    #+#             */
/*   Updated: 2023/12/12 15:59:51 by ounal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}				t_stack;

t_stack	*stack_init(char **argv);
char	**adding_list(int argc, char **argv, int *flag);
void	argument_check(int argc, char **argv, int *flag);
int		doing_controls(char **nbr_lst);
int		is_int(char *nbr_lst);
int		is_duplicate(char **nbr_lst);
int		sorting_numbers(t_stack **stack_a, t_stack **stack_b);
int		is_numbers_sorted(t_stack **stack, char c, int len);
void	ft_sort_three(t_stack **a);
void	error_exit(t_stack **stack_a, t_stack **stack_b);
void	free_stack(t_stack **stack);
char	**ft_cut(char *str);
int		is_max_int(const char *str);
size_t	ft_strlen(const char *s);
char	**free_all(char **result);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_quicksort_a(t_stack **a, t_stack **b, int len, int count);
int		ft_quicksort_b(t_stack **a, t_stack **b, int len, int count);
void	ft_quicksort_3a(t_stack **a, t_stack **b, int len);
int		ft_sort_small_b(t_stack **a, t_stack **b, int len);
int		ft_get_middle(int *pivot, t_stack **stack_a, int size);
int		ft_push(t_stack **a, t_stack **b, int len, int operation);
void	ft_sort_int_tmp(int *tmp_stack, int size);
void	ft_mid_stack(t_stack **stack);
int		highvalue(t_stack **stack);
t_stack	*ft_newlst(int content);
t_stack	*ft_lastlst(t_stack *lst);
int		ft_sizelst(t_stack *lst);
void	do_swapab(t_stack **stack);
void	do_sa(t_stack **stack_a, int flag);
void	do_sb(t_stack **stack_b, int flag);
void	do_ss(t_stack **stack_a, t_stack **stack_b, int flag);
void	do_rotateab(t_stack **stack);
void	do_ra(t_stack **stack_a, int flag);
void	do_rb(t_stack **stack_b, int flag);
void	do_rr(t_stack **stack_a, t_stack **stack_b, int flag);
void	do_rerotateab(t_stack **stack);
void	do_rra(t_stack **stack_a, int flag);
void	do_rrb(t_stack **stack_b, int flag);
void	do_rrr(t_stack **stack_a, t_stack **stack_b, int flag);
void	ft_push_2(t_stack **stack_a, t_stack **stack_b);
void	do_pa(t_stack **stack_a, t_stack **stack_b, int flag);
void	do_pb(t_stack **stack_b, t_stack **stack_a, int flag);
void	checker(char *str, t_stack **a, t_stack **b);
void	checker_2(t_stack **a, t_stack **b, int flag);
void	error(t_stack **a, t_stack **b, int flag);
void	print(t_stack **a, t_stack **b);
void	second_main(t_stack *a, t_stack *b, char **argv, int flag);

#endif