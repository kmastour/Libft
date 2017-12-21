# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmastour <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/18 08:38:30 by kmastour          #+#    #+#              #
#    Updated: 2017/12/04 10:52:03 by kmastour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen.c ft_strcmp.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c \
		ft_strcat.c ft_strchr.c ft_strcpy.c ft_strdup.c ft_strlcat.c \
		ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnstr.c ft_strrchr.c \
		ft_strstr.c ft_tolower.c ft_toupper.c ft_memchr.c ft_memmove.c \
		ft_memcmp.c ft_strlcat.c ft_memalloc.c ft_memdel.c ft_strnew.c \
		ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
		ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
		ft_strtrim.c ft_strsplit.c ft_putchar.c ft_putnbr.c ft_putstr.c \
		ft_memccpy.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_lstnew.c ft_lstdelone.c \
		ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
		ft_recursive_factorial.c ft_swap.c ft_range.c ft_sqrt.c ft_count_if.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(FLAGS) -c $(SRC) -I ./
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean	
	/bin/rm -f $(NAME)

re:	 fclean  all
