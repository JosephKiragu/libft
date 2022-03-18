NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I.
SRCS		=	ft_bzero.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
					ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
					ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c 
						

				
OBJ			= $(SRCS:%.c=%.o)

all: 		$(NAME) 

	

# This won't run if the .o files don't exist or are not modified
$(NAME): 	$(OBJ)
			ar rcs $(NAME) $(OBJ)

# This won't run if the source files don't exist or are not modified
$(OBJ):		$(SRCS) 
			gcc $(CFLAGS) $(SRCS)

clean:	
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re: 		fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY:		clean fclean all 