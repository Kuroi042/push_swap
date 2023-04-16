NAME = Push_swap


LIBFT_DIR = libft
LIBFT =  $(LIBFT_DIR)/libft.a

FT_PRINTF_DIR = ft_printf
FT_PRINTF =  $(FT_PRINTF_DIR)/ft_printf.a

CC = cc

SRC_PS = main.c push_swap_errors.c instructions_S.c sorting.c range.c ft_free.c
OBJS_C = ${SRC_PS:.c=.o}

all: $(NAME)

$(NAME):  $(OBJS_C)  $(LIBFT) 
	@$(CC)  $(OBJS_C) $(LIBFT) -o $(NAME)

 $(LIBFT):
	 @make -C $(LIBFT_DIR) all

 $(FT_PRINTF):
	 @make -C $(FT_PRINTF_DIR) all

clean :
	rm -rf  $(OBJS_C)
	@make -C  $(LIBFT_DIR)  clean
	@make -C  $(FT_PRINTF_DIR)  clean

fclean : clean
	rm -rf $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@make -C $(FT_PRINTF_DIR) fclean

re: fclean all
