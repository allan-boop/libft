#########################################
## ARGUMENTS

NAME		= allan
CFLAGS		= -Wextra -Wall -Werror -c 
CC			= gcc

########################################
## SOURCES

SRC_FILES	= main.c \
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

OBJ_FILES = $(SRC_FILES:.c=.o)

########################################
## RULES

all: ${NAME}

${NAME}: ${OBJ_FILES}
			${CC} ${OBJ_FILES} -o ${NAME}
%.o: %.c
		${CC} ${CFLAGS} -c $< -o $@
clean: 
		rm -f *.o
fclean: clean
		rm -f ${NAME}
re: fclean all

.PHONY: all clean fclean re