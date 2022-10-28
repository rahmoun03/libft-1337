SRCS = ft_isalnum.c ft_itoa.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_substr.c \
ft_isalpha.c ft_memcmp.c ft_putstr_fd.c ft_strjoin.c ft_strncmp.c ft_tolower.c ft_memmove.c \
ft_atoi.c ft_isascii.c ft_memset.c ft_split.c ft_strlcat.c ft_strnstr.c ft_toupper.c \
ft_bzero.c ft_isdigit.c ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c ft_memchr.c \
ft_calloc.c ft_isprint.c ft_putendl_fd.c ft_strdup.c ft_strlen.c ft_strtrim.c ft_memcpy.c \
#BONUS = ft_lstnew.c

#BON		= ${BONUS:.c=.o}
OBJS	= ${SRCS:.c=.o}
FLAGS	= -Wall -Wextra -Werror
GCC		= gcc
AR		= ar rc
RM		= rm -rf
NAME	= libft.a
LIBR	= ranlib

.c.o:
	${GCC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

#bonus: ${BON}
#	${AR} ${NAME} ${BON}
#	${LIBR} ${NAME}