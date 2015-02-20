/*
** my_list.c for list in /home/geiger_a/rendu/CPE_2014_Pushswap
** 
** Made by anthony geiger
** Login   <geiger_a@epitech.net>
** 
** Started on  Mon Dec  8 11:24:22 2014 anthony geiger
** Last update Sat Dec 13 19:55:45 2014 anthony geiger
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include "struct.h"

int		my_first_nb(t_dlist *p, int nb)
{
  t_node	*new_elem;

  if ((new_elem = malloc(sizeof(t_node))) == NULL)
    exit(1);
  new_elem->data = nb;
  new_elem->prev = p->start;
  new_elem->next = p->end;
  p->start = new_elem;
  p->end = new_elem;
  p->length++;
  return (0);
}

int		my_putnbr_in_list(t_dlist *p, int nb)
{
  t_node	*new_elem;

  if ((new_elem = malloc(sizeof(t_node))) == NULL)
    exit(1);
  new_elem->data = nb;
  new_elem->next = NULL;
  new_elem->prev = p->end;
  p->end->next = new_elem;
  p->end = new_elem;
  p->length++;
  return (0);
}

int		my_swap_chain(t_node *na, t_dlist *p)
{
  int		stock_nb;

  na = p->start;
  na = na->next;
  stock_nb = 0;
  stock_nb = p->start->data;
  p->start->data = na->data;
  na->data = stock_nb;
  return (0);
}

int		my_put_nb_in_end(t_dlist *p, int nb)
{
  t_node	*new_elem;

  if ((new_elem = malloc(sizeof(t_node))) == NULL)
    exit(1);
  new_elem->data = nb;
  new_elem->next = NULL;
  new_elem->prev = p->end;
  p->end = new_elem;
  p->length++;
  return (0);
}

int		my_put_nb_in_start(t_dlist *p, int nb)
{
  t_node	*new_elem;

  if ((new_elem = malloc(sizeof(t_node))) == NULL)
    exit(1);
  new_elem->data = nb;
  new_elem->next = p->start;
  new_elem->prev = NULL;
  p->start = new_elem;
  p->length++;
  return (0);
}
