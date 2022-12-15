
#	███╗   ███╗ █████╗ ██╗  ██╗███████╗███████╗██╗██╗     ███████╗
#	████╗ ████║██╔══██╗██║ ██╔╝██╔════╝██╔════╝██║██║     ██╔════╝
#	██╔████╔██║███████║█████╔╝ █████╗  █████╗  ██║██║     █████╗
#	██║╚██╔╝██║██╔══██║██╔═██╗ ██╔══╝  ██╔══╝  ██║██║     ██╔══╝
#	██║ ╚═╝ ██║██║  ██║██║  ██╗███████╗██║     ██║███████╗███████╗
#	╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝╚═╝     ╚═╝╚══════╝╚══════╝


INSERT BUILD TO COMPARE HOW MUCH DISTANCE IS INBETWEEN THE NUMBERS

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

SRC =		valid.c						\
			push_swap.c					\
			read_input.c				\
			./utils/utils.c				\
			./utils/utils_a.c			\
			./utils/utils_b.c			\
			./utils/utils_f.c			\
			./sorting/sort.c			\
			./sorting/pusha.c			\
			./sorting/pushb.c			\
			./sorting/rotatea.c			\
			./sorting/negative.c		\
			./sorting/nexthiloa.c		\
			./sorting/nexthilob.c		\
			./sorting/sort_small.c		\
			./sorting/operationsa.c		\
			./sorting/operationsb.c		\
			./sorting/check_sorted.c	\

OBJS =		$(SRC:.c=.o)

LIBFT =	./libft/libft.a

PRINTF =	./ft_printf/libftprintf.a

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
