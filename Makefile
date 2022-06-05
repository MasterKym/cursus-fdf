NAME = fdf

CC = cc

# flags
CFLAGS = -Wall -Wextra -Werror
LIBX_FLAGS = -lmlx -lXext -lX11

# files
FILES = main 

SRCS = $(FILES)

# dependencies
LIBFTDIR := libft/
LIBFT := libft.a

GET_NEXT_LINE_DIR := get_next_line
GET_NEXT_LINE := get_next_line


# rules
OBJS = $(SRCS:=.o)
HEADER = fdf.h

%.o : %.c
	$(CC) $(LIBX_FLAGS) $(CFLAGS) -c $< -o $@

$(NAME): $(LIBFT) $(OBJS) $(HEADER)
	$(CC) $(OBJS) $(LIBX_FLAGS) $(LIBFT) -o $(NAME)

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME) $(LIBFT) $(GET_NEXT_LINE)

re:	fclean all


## Compile LIBFT
$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)
	mv $(LIBFTDIR)/$(LIBFT) $(LIBFT)
	$(MAKE) -C $(LIBFTDIR) fclean

