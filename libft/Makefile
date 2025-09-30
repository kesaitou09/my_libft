# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kesaitou <kesaitou@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/27 14:12:40 by kesaitou          #+#    #+#              #
#    Updated: 2025/09/29 19:55:43 by kesaitou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CCFLAGS = -Wall -Werror -Wextra
INCS = -I includes
AR = ar
ARFLAGS = rcs

SRCS = srcs/ft_itoa.c srcs/ft_putstr_fd.c srcs/ft_strmapi.c srcs/isalpha.c \
       srcs/memmove.c srcs/strlcat.c srcs/strrchr.c srcs/atoi.c \
       srcs/ft_putchar_fd.c srcs/ft_split.c srcs/ft_strtrim.c srcs/isascii.c \
       srcs/memchr.c srcs/memset.c srcs/strlcpy.c srcs/tolower.c \
       srcs/bzero.c srcs/ft_putendl_fd.c srcs/ft_striteri.c srcs/ft_substr.c \
       srcs/isdigit.c srcs/memcmp.c srcs/strchr.c srcs/strlen.c\
       srcs/toupper.c srcs/calloc.c srcs/ft_putnbr_fd.c srcs/ft_strjoin.c srcs/isalnum.c \
       srcs/isprint.c srcs/memcpy.c srcs/strdup.c srcs/strncmp.c srcs/strnstr.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
