NAME	= libftprintf.a
DIRLFT	= libft/libft.a
CC		= cc
AR		= ar rcs
MAKE	= make
CFLAGS	= -Wall -Werror -Wextra
SRC		= srcs/ft_printf.c srcs/ft_flags.c	srcs/ft_print_str_char.c	srcs/utils_3.c \
			srcs/ft_print_hex.c		srcs/ft_print_uint.c	srcs/utils_4.c \
			srcs/ft_print_int.c		srcs/utils_1.c \
			srcs/ft_print_ptr_pct.c		srcs/utils_2.c
OBJ		= $(SRC:.c=.o)
INC		= -I includes/.
LIBFT	= -L -lft libft/.
RM		= rm -f

all		: $(NAME)

$(NAME) : $(OBJ)
	$(MAKE) -C libft
	cp $(DIRLFT) $(NAME)
	$(AR) $@ $^

bonus : all

.c.o	:
	$(CC) $(CFLAGS) $(LIB) $(INC) -o $@ -c $<

.PHONY	: all clean fclean re bonus

clean	:
	$(MAKE) clean -C libft
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(DIRLFT)
	$(RM) $(NAME)

re		: fclean
	make all
