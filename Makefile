NAME = fdf

FLAGS = -Wall -Wextra -Werror -I fdf.h

MLX = -lmlx -framework AppKit -framework OpenGl

LIB = ./libft/libft.a

SRC_FILES = 	main.c \
				counting_params_and_valid_map.c \
				make_map.c \
				draw_lines.c \
				move_x_y.c \
				preferences_color.c \
				move_h.c \
				make_center.c \
				if_key.c \
				free_some.c \
				info_window.c \
				error.c \

FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

makelib:
	@make -C ./libft/

libclean:
	@make -C ./libft/ clean

libfclean:
	@make -C ./libft/ fclean

$(NAME): $(FILES) $(SRC_FILES)
	@make -C ./libft/
	@gcc -o $(NAME) $(FILES) $(FLAGS) $(MLX) $(LIB)
	@printf "\e[32mLIBFT_FDF DONE\n"

%.o: %.c
	@gcc $(FLAGS) -c -o $@ $<

clean: libclean
	@/bin/rm -f $(FILES)
	@printf "\e[31mCLEANING DONE\n"
fclean: libfclean clean
	@/bin/rm -f $(NAME)
	@printf "\e[33mFULL CLEANING DONE\n"
re: fclean all
