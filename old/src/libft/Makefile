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

SRCS 	=	ft_split.c 		\
			  ft_split.c 		\
				ft_strlen.c		\
				ft_strncmp.c	\
				ft_substr.c		

							  

# Bonus
SRCS_B 	= ft_lstnew.c		\
		  ft_lstadd_front.c	\
		  ft_lstadd_back.c	\
		  ft_lstsize.c		\
		  ft_lstlast.c		\
		  ft_lstdelone.c	\
		  ft_lstclear.c		\
		  ft_lstiter.c		\
		  ft_lstmap.c
		  
OBJS = $(SRCS:.c=.o)

OBJS_B = $(SRCS_B:.c=.o)

all: $(NAME)

$(OBJS): $(SRCS)
	gcc $(CFLAGS) -c $(SRCS)
	
$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_B)
	ar rcs $(NAME) $(OBJS) $(OBJS_B)

$(OBJS_B): $(SRCS_B)
	gcc $(CFLAGS) -c $(SRCS_B)
	
clean:
	rm -f $(OBJS) $(OBJS_B)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY:	all bonus clean fclean re
