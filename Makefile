# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hualei <hua.lei@learner.42.tech>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/13 09:48:30 by hualei            #+#    #+#              #
#    Updated: 2026/11/14 09:10:54 by hualei           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# variables
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

# source files
SRCS = ft_atoi.c \
       ft_bzero.c \
       ft_calloc.c \
       ft_isalnum.c \
       ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_itoa.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_memset.c \
       ft_putchar_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \
       ft_putstr_fd.c \
       ft_split.c \
       ft_strchr.c \
       ft_strdup.c \
       ft_striteri.c \
       ft_strjoin.c \
       ft_strlcat.c \
       ft_strlcpy.c \
       ft_strlen.c \
       ft_strmapi.c \
       ft_strncmp.c \
       ft_strnstr.c \
       ft_strrchr.c \
       ft_strtrim.c \
       ft_substr.c \
       ft_tolower.c \
       ft_toupper.c \
	   ft_lstnew.c

# change all .c to .o because static lib is made of .o
OBJS = $(SRCS:.c=.o)

# compile .c to .o
# -c only compilation, not doing link
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# ar assemble .o to .a
AR = ar
ARFLAGS = rcs

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

# remove object files
clean:
	rm -f $(OBJS)

# remove object files and static library
fclean: clean
	rm -f $(NAME)

# rebuild static library
re: fclean all

.PHONY: all clean fclean re
