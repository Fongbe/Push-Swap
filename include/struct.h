/*
** struct.h for struct in /home/geiger_a/rendu/CPE_2014_Pushswap
** 
** Made by anthony geiger
** Login   <geiger_a@epitech.net>
** 
** Started on  Sat Dec  6 13:28:53 2014 anthony geiger
** Last update Tue Dec  9 09:21:27 2014 anthony geiger
*/

#ifndef STRUCT_H_
# define STRUCT_H_

typedef	struct		s_node
{
  int			data;
  struct s_node		*next;
  struct s_node		*prev;
}			t_node;

typedef	struct	s_dlist
{
  unsigned int	length;
  t_node	*start;
  t_node	*end;
}		t_dlist;

typedef	struct	s_index_stock
{
  int		i;
  int		stock;
}		t_index_stock;

#endif /* !STRUCT_H_ */
