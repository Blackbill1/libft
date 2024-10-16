# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 14:12:24 by tle-dref          #+#    #+#              #
#    Updated: 2024/10/16 02:56:49 by tle-dref         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = .
INCDIR = .

SRC = $(SRCDIR)/ft_atoi.c \
		$(SRCDIR)/ft_bzero.c \
		$(SRCDIR)/ft_calloc.c \
		$(SRCDIR)/ft_isalnum.c \
		$(SRCDIR)/ft_isalpha.c \
		$(SRCDIR)/ft_isascii.c \
		$(SRCDIR)/ft_isdigit.c \
		$(SRCDIR)/ft_isprint.c \
		$(SRCDIR)/ft_itoa.c \
		$(SRCDIR)/ft_memchr.c \
		$(SRCDIR)/ft_memcmp.c \
		$(SRCDIR)/ft_memcpy.c \
		$(SRCDIR)/ft_memmove.c \
		$(SRCDIR)/ft_memset.c \
		$(SRCDIR)/ft_putchar_fd.c \
		$(SRCDIR)/ft_putendl_fd.c \
		$(SRCDIR)/ft_putnbr_fd.c \
		$(SRCDIR)/ft_putstr_fd.c \
		$(SRCDIR)/ft_split.c \
		$(SRCDIR)/ft_strchr.c \
		$(SRCDIR)/ft_strdup.c \
		$(SRCDIR)/ft_striteri.c \
		$(SRCDIR)/ft_strjoin.c \
		$(SRCDIR)/ft_strlcat.c \
		$(SRCDIR)/ft_strlcpy.c \
		$(SRCDIR)/ft_strlen.c \
		$(SRCDIR)/ft_strmapi.c \
		$(SRCDIR)/ft_strncmp.c \
		$(SRCDIR)/ft_strnstr.c \
		$(SRCDIR)/ft_strrchr.c \
		$(SRCDIR)/ft_strtrim.c \
		$(SRCDIR)/ft_substr.c \
		$(SRCDIR)/ft_tolower.c \
		$(SRCDIR)/ft_toupper.c \

SRCBONUS = $(SRCDIR)/ft_lstnew_bonus.c \
			$(SRCDIR)/ft_lstadd_front_bonus.c \
			$(SRCDIR)/ft_lstsize_bonus.c \
			$(SRCDIR)/ft_lstlast_bonus.c \
			$(SRCDIR)/ft_lstadd_back_bonus.c \
			$(SRCDIR)/ft_lstdelone_bonus.c \
			$(SRCDIR)/ft_lstclear_bonus.c \
			$(SRCDIR)/ft_lstiter_bonus.c \
			$(SRCDIR)/ft_lstmap_bonus.c \

OBJ = $(SRC:.c=.o)

OBJBONUS = $(SRCBONUS:.c=.o)

HEADER = $(INCDIR)/libft.h

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@ar rs $@ $(OBJ)
	@echo "✓ Compilation des fichiers source et creation de la bibliotheque ✓"

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "✓ suppression des objets ✓"

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: $(NAME) $(OBJBONUS)
	@echo "✔Compilation des fichiers bonus✔"
	@ar -rs $(NAME) $(OBJBONUS)

.PHONY: all clean fclean re bonus
