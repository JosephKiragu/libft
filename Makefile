# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkiragu <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 16:51:36 by jkiragu           #+#    #+#              #
#    Updated: 2022/05/11 14:50:19 by jkiragu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I.
SRCS		=	ft_bzero.c ft_atoi.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
					ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
					ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c \
					ft_strjoin.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
					ft_putnbr_fd.c ft_strtrim.c
						
BONUS			=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
						ft_lstclear.c
				
OBJ			= $(SRCS:%.c=%.o)

BONUS_OBJS		= $(BONUS:.c=.o)

all: 		$(NAME) 

	
$(NAME): 	$(OBJ)
			ar rcs $(NAME) $(OBJ)


clean:	
			rm -f $(OBJ) $(BONUS_OBJS)

fclean:		clean
			rm -f $(NAME)

re: 		fclean all

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)


.PHONY:		clean fclean all re bonus
