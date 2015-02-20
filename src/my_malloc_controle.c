/*
** my_malloc_controle.c for controle in /home/geiger_a/rendu/CPE_2014_Pushswap
** 
** Made by anthony geiger
** Login   <geiger_a@epitech.net>
** 
** Started on  Tue Dec  9 15:58:54 2014 anthony geiger
** Last update Tue Dec  9 16:02:07 2014 anthony geiger
*/

#include <stdlib.h>
#include "my.h"
#include "struct.h"

t_dlist         *my_allocation(void)
{
  t_dlist       *p;

  p = malloc(sizeof(t_dlist));
  if (p == NULL)
    return (NULL);
  p->length = 0;
  p->start = NULL;
  p->end = NULL;
  return (p);
}
