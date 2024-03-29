# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/07 15:43:05 by brfeltz           #+#    #+#              #
#    Updated: 2019/12/18 15:16:59 by brfeltz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADERS = HEADERS/printf.h

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_flags_mods.c handlers.c conversions.c ft_cast.c ft_checks.c tools.c ft_parse.c

LIBFT_SRCS = ft_bzero.c \
	ft_atoi.c \
	ft_do_op.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_isspace.c \
	ft_itoa.c \
	ft_lstadd.c \
	ft_lstdel.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_memalloc.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_memmove.c \
	ft_memset.c \
	ft_max.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_putendl.c \
	ft_putendl_fd.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putstr.c \
	ft_putstr_fd.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strclr.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strdel.c \
	ft_strdup.c \
	ft_strequ.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strndup.c \
	ft_strnequ.c \
	ft_strnew.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strsplit.c \
	ft_strstr.c \
	ft_strsub.c \
	ft_swap.c \
	ft_strtrim.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_printbits.c \
	get_next_line.c \
	ft_strrev.c \

OBJECTS = $(patsubst %.c,%.o,$(SRCS))
OBJECTS += $(patsubst %.c,%.o,$(LIBFT_SRCS))

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(addprefix SRCS/,$(SRCS)) $(addprefix libft/,$(LIBFT_SRCS)) -I $(HEADERS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@rm -rf *.o

clean:
	@rm -rf $(OBJECTS)

fclean:	clean
	@rm -rf $(NAME)
	@rm -rf a.out*

re:	fclean all

debug:
	$(CC) $(CFLAGS) $(addprefix SRCS/,$(SRCS)) $(addprefix libft/,$(LIBFT_SRCS))
