/*
** case_la.c for case_la in /home/geiger_a/rendu/CPE_2014_Pushswap
** 
** Made by anthony geiger
** Login   <geiger_a@epitech.net>
** 
** Started on  Mon Dec  8 11:26:31 2014 anthony geiger
** Last update Sat Dec 13 19:55:08 2014 anthony geiger
*/

#include <stdlib.h>
#include "my.h"
#include "struct.h"

void		case_sa(t_dlist *a, t_node *na)
{
  my_swap_chain(na, a);
  my_putstr("sa ");
}

void		case_pa(t_dlist *a, t_dlist *b, t_node *bn)
{
  bn = b->start;
  my_put_nb_in_end(a, bn->data);
  if (b->start->next == NULL)
    {
      free(b->start);
      b->start = NULL;
      b->length--;
    }
  else
    {
      b->start = b->start->next;
      b->length--;
    }
  if (b->start == NULL)
    {
      my_putstr("pa");
      return ;
    }
  my_putstr("pa ");
}

void		case_ss(t_dlist *a, t_node *na, t_dlist *b, t_node *bn)
{
  my_swap_chain(na, a);
  my_swap_chain(bn, b);
  my_putstr("ss ");
}

void		case_ra(t_dlist *a, t_node *na)
{
  na = a->start->next;
  my_putnbr_in_list(a, a->start->data);
  free(a->start);
  a->start = na;
  na = a->start;
  a->length--;
  my_putstr("ra ");
}
