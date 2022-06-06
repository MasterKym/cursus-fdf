NAME = fdf

CC = cc

# flags
# CFLAGS = -Wall -Wextra -Werror
LIBX_FLAGS = -lmlx -lXext -lX11

# files
FILES = main 
CONNECTION = $(addprefix connection/, init_connection open_window)
DRAW = $(addprefix draw/, draw_3d_point draw_axes)
HELPERS = $(addprefix helpers/, error_exit hard_coded_map)


SRCS = $(FILES) $(CONNECTION) $(DRAW) $(HELPERS)

# dependencies
LIBFTDIR := libft/
LIBFT := libft.a

# rules
OBJS = $(SRCS:=.o)
HEADER = fdf.h

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(LIBFT) $(OBJS) $(HEADER)
	$(CC) $(OBJS) $(LIBX_FLAGS) $(LIBFT) -o $(NAME)

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME) $(LIBFT) $(OBJS)

re:	fclean all


## Compile LIBFT
$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)
	mv $(LIBFTDIR)/$(LIBFT) $(LIBFT)
	$(MAKE) -C $(LIBFTDIR) fclean

