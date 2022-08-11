# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egiron-t <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 12:05:42 by egiron-t          #+#    #+#              #
#    Updated: 2022/07/22 19:36:03 by egiron-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c func_first.c func_error.c func_files.c func_list.c
OBJS	= $(SRCS:.c=.o)
NAME	= pipex
CFLAGS	= -Wall -Werror -Wextra 
GCC		= gcc
RM		= rm -f

# Colors

DEF_COLOR 	= \033[0;39m
GRAY 		= \033[0;90m
RED 		= \033[0;91m
GREEN 		= \033[0;92m
YELLOW 		= \033[0;93m
BLUE 		= \033[0;94m
MAGENTA 	= \033[0;95m
CYAN 		= \033[0;96m
WHITE 		= \033[0;97m

all:		compilla

debug: CFLAGS =  -g -Wall -Werror -Wextra -fsanitize=address
debug:		compilla

debugleak: CFLAGS = -g -Wall -Werror -Wextra -fsanitize=leak
debugleak:		compilla


compilla: 	$(NAME)
.c.o:
	$(GCC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	make -C libft
	@echo "$(GREEN)libft compiled!$(DEF_COLOR)"
	$(GCC)  $(CFLAGS) -I pipex.h libft/libft.a -o $(NAME) $?
	@echo "$(GREEN)pipex compiled!$(DEF_COLOR)"
clean:		
	$(RM) $(OBJS)
	rm -f libft/*.o
	@echo "$(BLUE)pipex object files cleaned!$(DEF_COLOR)"
	@echo "$(BLUE)libft object files cleaned!$(DEF_COLOR)"
fclean:		clean
	$(RM) $(NAME)
	rm -f libft/*.a
	@echo "$(CYAN)pipex executable cleaned!$(DEF_COLOR)"
	@echo "$(CYAN)libft.a cleaned!$(DEF_COLOR)"

norm:
	@norminette $(SRCS) | grep -v Norme -B1 || true

test:
	@./tests/tester.sh	

re:	fclean all	
	@echo "$(GREEN)Cleaned and rebuilt everything for pipex!$(DEF_COLOR)"

.PHONY:	all clean fclean re norm debug
