# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egiron-t <egiron-t@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/07 13:00:50 by egiron-t          #+#    #+#              #
#    Updated: 2022/07/21 13:41:27 by egiron-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a

CFLAGS 	= -Wall -Wextra -Werror -I.

SRCS 	=	ft_memset.c		\
			ft_putstr_fd.c	\
			ft_strlen.c    \
			ft_split.c     \
			ft_strncmp.c   \
			ft_substr.c    \
			ft_freearray.c 
											  
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(OBJS): $(SRCS)
	gcc $(CFLAGS) -c $(SRCS)
	
$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY:	all clean fclean re
