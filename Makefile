# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 11:38:54 by dkoriaki          #+#    #+#              #
#    Updated: 2019/11/21 14:39:30 by dkoriaki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INC	= libft.h

NAME	= libft.a

SRCS	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
			ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
			ft_strnstr.c ft_atoi.c ft_memccpy.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c

SRCS_B	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
			ft_lstiter_bonus.c ft_lstmap_bonus.c

HEADER	= libft.h

OBJS	= ${SRCS:.c=.o}

OBJS_B	= ${SRCS_B:.c=.o}

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

AR	= ar rc

.c.o:
			${CC} ${CFLAGS} -c $< -I $(HEADER) -o ${<:.c=.o}

all:		${NAME}

$(NAME):	${OBJS} ${INC}
			${AR} ${NAME} ${OBJS}

bonus:		${OBJS} ${OBJS_B} ${INC}
			${AR} ${NAME} ${OBJS} ${OBJS_B}

clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean re all bonus
