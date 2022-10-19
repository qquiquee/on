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
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_memchr.c		\
			ft_memcmp.c 	\
			ft_strlen.c		\
			ft_strlcpy.c	\
			ft_strlcat.c 	\
			ft_strchr.c 	\
			ft_strrchr.c 	\
			ft_strnstr.c 	\
			ft_strncmp.c	\
			ft_atoi.c		\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_calloc.c		\
			ft_strdup.c 	\
			ft_substr.c 	\
			ft_strjoin.c 	\
			ft_strtrim.c 	\
			ft_split.c 		\
			ft_itoa.c		\
			ft_strmapi.c 	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c \
			ft_putnbr_fd.c 	
							  

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
