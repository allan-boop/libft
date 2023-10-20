#########################################
## ARGUMENTS

NAME		= libft.a
CFLAGS		= -Wextra -Wall -Werror -c 
CC			= gcc

########################################
## SOURCES

SRC_FILES	= ft_memchr.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strlen.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c

OBJ_FILES = $(SRC_FILES:.c=.o)

########################################
## RULES

all: ${NAME}

${NAME}: ${OBJ_FILES}
			${AR} rcs ${NAME} ${OBJ_FILES}
%.o: %.c
		${CC} ${CFLAGS} -c $< -o $@
clean: 
		rm -f *.o
fclean: clean
		rm -f ${NAME}
re: fclean all

.PHONY: all clean fclean re