##
## Makefile for make in /home/geiger_a/rendu/MY_LS
## 
## Made by anthony geiger
## Login   <geiger_a@epitech.net>
## 
## Started on  Sun Nov 23 15:17:22 2014 anthony geiger
## Last update Fri Feb 20 10:31:51 2015 anthony geiger
##

CC	= gcc

RM      = rm -f

NAME    = push_swap

CFLAGS  += -Wextra -Wall -Werror
CFLAGS  += -pedantic
CFLAGS  += -I./include

LDFLAGS =

SRCS    = src/my_putnbr.c \
        src/my_putstr.c \
	src/my_list.c \
	src/push_swap.c \
	src/case_la.c \
	src/while_param.c \
	src/case_lb.c \
	src/my_malloc_controle.c \
        src/my_putchar.c

OBJS    = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
