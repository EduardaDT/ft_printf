NAME			= libftprintf.a

SRC				= ft_putchar_fd.c ft_hexanbr.c ft_putnosign.c ft_putstr_fd.c ft_strlen.c ft_putnbr_fd.c ft_printf.c ft_putptr.c

CFLAGS			= -Wall -Wextra -Werror -g
CC				= cc
FLAGLIB			= -rcs
RM				= rm -f

OBJECTS			= ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "Linking $(NAME)"
	@ar -rcs $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@$(RM) $(OBJECTS)

fclean:		clean
			@$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
