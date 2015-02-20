/*
** while_param.c for param in /home/geiger_a/rendu/CPE_2014_Pushswap
** 
** Made by anthony geiger
** Login   <geiger_a@epitech.net>
** 
** Started on  Tue Dec  9 15:00:08 2014 anthony geiger
** Last update Sat Dec 13 19:56:51 2014 anthony geiger
*/

#include <stdlib.h>
#include "my.h"
#include "struct.h"

void		my_pa_all(t_dlist *a, t_dlist *b, t_node *bn)
{
  while (b->start != NULL)
    case_pa(a, b, bn);
}

void		my_ra_stop(t_dlist *a, t_node *na, int i)
{
  while (i != 0)
    {
      case_ra(a, na);
      i--;
    }
}
