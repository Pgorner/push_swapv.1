
#  ███╗   ███╗ █████╗ ██╗  ██╗███████╗███████╗██╗██╗     ███████╗
#  ████╗ ████║██╔══██╗██║ ██╔╝██╔════╝██╔════╝██║██║     ██╔════╝
#  ██╔████╔██║███████║█████╔╝ █████╗  █████╗  ██║██║     █████╗
#  ██║╚██╔╝██║██╔══██║██╔═██╗ ██╔══╝  ██╔══╝  ██║██║     ██╔══╝
#  ██║ ╚═╝ ██║██║  ██║██║  ██╗███████╗██║     ██║███████╗███████╗
#  ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝╚═╝     ╚═╝╚══════╝╚══════╝


NAME = push_swap

CC =		cc
CFLAGS =	-Wall -Werror -Wextra
AR =		ar rcs
RM =		rm -rf

.SILENT:
			libft
			printf
			clean
			all
			$(NAME)

SRC =		ps_utils.c		\
			push_swap.c		\
			push.c			\
			check_valid.c	\
			read_input.c	\

OBJS =		$(SRC:.c=.o)

LIBFT = ./libft/libft.a

PRINTF = ./ft_printf/libftprintf.a

$(NAME):	$(LIBFT) $(PRINTF) $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
			@git clone https://github.com/Pgorner/libft.git
			@cd libft && make && make clean

$(PRINTF):
			@git clone https://github.com/Pgorner/ft_printf.git
			@cd ft_printf && make && make clean

all :		$(NAME)

clean :
			$(RM) $(OBJS)

fclean :	clean
			@$(RM) $(NAME)
			@$(RM) ./libft
			@$(RM) ./ft_printf

re :		fclean all

libft: $(LIBFT)

printf: $(PRINTF)

.PHONY: all clean fclean re
