# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgracia- <lgracia-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/17 18:19:07 by lgracia-          #+#    #+#              #
#    Updated: 2025/07/22 18:04:47 by lgracia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror -I ./

NAME = libft.a

HEADER = libft.h

SRC = error/ft_malloc_error.c error/ft_p_error.c \
	char/ft_isprint.c char/ft_toupper.c char/ft_tolower.c char/ft_isalpha.c char/ft_isascii.c char/ft_isdigit.c char/ft_isalnum.c\
	str/ft_substr.c str/ft_strdup.c str/ft_strlen.c \
	str/ft_strtrim.c str/ft_strjoin.c str/ft_strchrcmp.c str/ft_strcmp.c str/ft_strncmp.c str/ft_strnstr.c str/ft_strlcpy.c str/ft_strlcat.c str/ft_split.c \
	str/ft_strchr.c str/ft_strrchr.c \
	str/ft_strmapi.c str/ft_striteri.c str/ft_arraycpy.c str/ft_arrayncpy.c \
	num/ft_atoi.c num/ft_itoa.c num/ft_itohexup.c \
	fd/ft_putchar_fd.c fd/ft_putnbr_fd.c fd/ft_putstr_fd.c fd/ft_putendl_fd.c \
	mem/ft_bzero.c mem/ft_calloc.c mem/ft_memcmp.c mem/ft_memchr.c mem/ft_memset.c mem/ft_memcpy.c mem/ft_memmove.c \
	clear/clear_array.c

DOBJ = obj

DSRC = $(addprefix src/, $(SRC))

OBJ = $(addprefix $(DOBJ)/, $(SRC:.c=.o))

BONUS = lst/ft_lstnew.c lst/ft_lstadd_front.c lst/ft_lstsize.c lst/ft_lstlast.c lst/ft_lstadd_back.c lst/ft_lstdelone.c lst/ft_lstclear.c lst/ft_lstiter.c lst/ft_lstmap.c

OBJBONUS = $(BONUS:.c=.o)

DEPS = $(addprefix $(DOBJ)/, $(SRC:.c=.d))

DEPSB = $(BONUS:.c=.d)

all: dir $(NAME)

-include $(DEPS)

dir:
	mkdir -p $(DOBJ)
	mkdir -p $(DOBJ)/str
	mkdir -p $(DOBJ)/mem
	mkdir -p $(DOBJ)/char
	mkdir -p $(DOBJ)/num
	mkdir -p $(DOBJ)/fd
	mkdir -p $(DOBJ)/error
	mkdir -p $(DOBJ)/clear

$(NAME): $(OBJ) Makefile
	ar -rcs $(NAME) $(OBJ)

$(DOBJ)/%.o:src/%.c Makefile
	$(CC) $(FLAGS) -MMD -c $< -o $@

clean:
	rm -fr $(DOBJ)
	rm -fr $(OBJBONUS)

fclean: clean
	rm -fr $(NAME)

re: fclean all

bonus: $(HEADER) $(OBJ) $(OBJBONUS)
	ar -rcs $(NAME) $(OBJ) $(OBJBONUS) 

-include $(DEPSB)

.PHONY: clean re fclean all
