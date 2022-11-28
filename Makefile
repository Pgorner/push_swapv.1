NAME = push_swap.a

CC =		cc
CFLAGS =	-Wall -Werror -Wextra
AR =		ar rcs
RM =		rm -f

LIBFT_DIR	= libft
LIBFT_LIB	= libft.a
LIBFT		= $(LIBFT_DIR)/$(LIBFT_LIB)#

SRC =		ft_split.c	\
			ps_utils.c	\
			push_swap.c	\
			push_swap.h	\
			push.c		\

OBJS =		$(SRC:.c=.o)

$(NAME):	$(LIBFT) $(OBJS)
			$(AR) $(NAME) $(OBJS)

all :		$(NAME)

clean :
			$(RM) $(OBJS)
			make clean -C $(LIBFT_DIR)

fclean :	clean
			$(RM) $(NAME)
			make fclean -C $(LIBFT_DIR)

re :		fclean
			$(MAKE) all

libft:		$(LIBFT)

$(LIBFT):
			git clone https://github.com/Pgorner/libft.git $(LIBFT_DIR); make -C $(LIBFT_DIR)

.PHONY: all clean fclean re
