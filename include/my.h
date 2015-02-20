/*
** my.h for m in /home/geiger_a/rendu/CPE_2014_Pushswap
** 
** Made by anthony geiger
** Login   <geiger_a@epitech.net>
** 
** Started on  Sat Dec  6 13:23:29 2014 anthony geiger
** Last update Tue Dec  9 16:02:06 2014 anthony geiger
*/

#ifndef MY_H_
# define MY_H_
#include "struct.h"

void		my_putchar(char c);
void		my_putnbr(int nb);
void		my_putstr(char *str);
void		my_putsterr(char *str);
void		case_sa(t_dlist *a, t_node *na);
void		case_ss(t_dlist *a, t_node *na, t_dlist *b, t_node *bn);
void		nb_in_la(t_dlist *p, char **argv, int x, int y);
void		case_sb(t_dlist *b, t_node *bn);
void		case_pb(t_dlist *a, t_node *na, t_dlist *b);
void		first_nb(t_dlist *p, char **argv, int x, int y);
t_dlist		*my_allocation(void);
int		my_first_nb(t_dlist *p, int nb);
int		my_putnbr_in_list(t_dlist *p, int nb);
int		my_swap_chain(t_node *na, t_dlist *p);
void		case_pa(t_dlist *a, t_dlist *b, t_node *bn);
int		my_put_nb_in_start(t_dlist *p, int nb);
void		case_ra(t_dlist *a, t_node *na);
void		my_pa_all(t_dlist *a, t_dlist *b, t_node *bn);
void		my_ra_stop(t_dlist *a, t_node *na, int i);
int             my_put_nb_in_end(t_dlist *p, int nb);
t_dlist         *my_allocation(void);

#endif /* !MY_H_ */
