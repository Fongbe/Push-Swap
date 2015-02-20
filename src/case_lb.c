/*
** case_lb.c for case_lb in /home/geiger_a/rendu/CPE_2014_Pushswap
** 
** Made by anthony geiger
** Login   <geiger_a@epitech.net>
** 
** Started on  Mon Dec  8 11:29:56 2014 anthony geiger
** Last update Sat Dec 13 19:55:23 2014 anthony geiger
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include "struct.h"

void		case_sb(t_dlist *b, t_node *bn)
{
  my_swap_chain(bn, b);
  my_putstr("sb ");
}

void		case_pb(t_dlist *a, t_node *na, t_dlist *b)
{
  na = a->start;
  if (b->start == NULL)
    my_first_nb(b, na->data);
  else
    {
      my_putnbr_in_list(b, na->data);
    }
  a->start = a->start->next;
  a->length--;
  my_putstr("pb ");
}

void		first_nb(t_dlist *p, char **argv, int x, int y)
{
  int		nb;

  nb = 0;
  while (argv[x][y])
    {
      nb = nb * 10 + argv[x][y] - '0';
      y++;
    }
  my_first_nb(p, nb);
}
