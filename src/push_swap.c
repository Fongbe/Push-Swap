/*
** push_swap.c for push in /home/geiger_a/rendu/CPE_2014_Pushswap
** 
** Made by anthony geiger
** Login   <geiger_a@epitech.net>
** 
** Started on  Sat Dec  6 13:21:30 2014 anthony geiger
** Last update Sat Dec 13 19:57:13 2014 anthony geiger
*/

#include <stdlib.h>
#include "my.h"
#include "struct.h"

void		my_argv_gest(char **argv, t_dlist *p)
{
  unsigned int  x;
  unsigned int  y;

  x = 1;
  y = 0;
  while (argv[x])
    {
      y = 0;
      if (x == 1)
	first_nb(p, argv, x, y);
      if (x != 1)
	nb_in_la(p, argv, x, y);
      x++;
    }
}

void            nb_in_la(t_dlist *p, char **argv, int x, int y)
{
  int           nb;
  int		neg;

  nb = 0;
  neg = 0;
  while (argv[x][y])
    {
      if ((argv[x][y] < '0' || argv[x][y] > '9') && argv[x][y] != '-')
	{
	  my_putsterr("Worng chain\n");
	  exit(1);
	}
      if (argv[x][y] == '-')
	{
	  neg = 1;
	  y++;
	}
      nb = nb * 10 + argv[x][y] - '0';
      y++;
    }
  if (neg == 1)
    nb = - nb;
  my_putnbr_in_list(p, nb);
}

void		push_swap(t_dlist *a, t_node *na, t_dlist *b, t_node *bn)
{
  t_index_stock	s;

  while (a->start != NULL)
    {
      na = a->start;
      s.stock = 2147483647;
      s.i = 0;
      while (na != NULL)
	{
	  if (na->data < s.stock)
	    s.stock = na->data;
	  na = na->next;
	}
      na = a->start;
      while (na->data != s.stock)
	{
	  na = na->next;
	  s.i++;
	}
      my_ra_stop(a, na, s.i);
      case_pb(a, na, b);
    }
  my_pa_all(a, b, bn);
}

void		my_free_list(t_dlist *a, t_node *na)
{
  na = a->start;
  while (na != NULL)
    {
      free(na);
      na = na->next;
    }
  free(a);
}

int		main(int argc, char **argv)
{
  t_dlist	*a;
  t_node	*na;
  t_dlist	*b;
  t_node	*bn;

  a = my_allocation();
  if (a == NULL)
    return (1);
  b = my_allocation();
  if (b == NULL)
    return (1);
  if (argc == 1)
    {
      my_putsterr("there is no argument or to few argument for swap\n");
      return (0);
    }
  my_argv_gest(argv, a);
  na = a->start;
  bn = b->start;
  push_swap(a, na, b, bn);
  my_putchar('\n');
  my_free_list(a, na);
  return (0);
}
