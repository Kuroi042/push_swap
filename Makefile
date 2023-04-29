NAME = push_swap
MAME = checker


LIBFT_DIR = libft
LIBFT =  $(LIBFT_DIR)/libft.a

FT_PRINTF_DIR = ft_printf
FT_PRINTF =  $(FT_PRINTF_DIR)/ft_printf.a

CC = cc
SRC_PS_BONUS = main_bonus.c push_swap_errors_bonus.c error_bonus.c tools_bonus.c instruction_bonus.c
SRC_PS = main.c push_swap_errors.c instructions_S.c sorting.c range.c ft_free.c tools.c parsing.c tools_2.c
OBJS_C = ${SRC_PS:.c=.o}
OBJS_C_BONUS = ${SRC_PS_BONUS:.c=.o}

all: $(NAME)
$(NAME):  $(OBJS_C)  $(LIBFT)  $(FT_PRINTF)
	@$(CC)  $(OBJS_C) $(LIBFT)  $(FT_PRINTF)  -o $(NAME)

bonus : $(MAME)
$(MAME): $(OBJS_C_BONUS) $(LIBFT)  $(FT_PRINTF)
	@$(CC) $(OBJS_C_BONUS) $(LIBFT)  $(FT_PRINTF) -o $(MAME)

 $(LIBFT):
	 @make -C $(LIBFT_DIR) all

 $(FT_PRINTF):
	 @make -C $(FT_PRINTF_DIR) all

clean :
	rm -rf  $(OBJS_C)
	@make -C  $(LIBFT_DIR)  clean
	@make -C  $(FT_PRINTF_DIR)  clean

clean_bonus :
	rm -rf  $(OBJS_C_BONUS)
	@make -C  $(LIBFT_DIR)  clean
	@make -C  $(FT_PRINTF_DIR)  clean

fclean : clean
	rm -rf $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@make -C $(FT_PRINTF_DIR) fclean

fclean_bonus : clean_bonus
	rm -rf $(MAME)
	@make -C $(LIBFT_DIR) fclean_bonus
	@make -C $(FT_PRINTF_DIR) fclean_bonus

re: fclean all
#xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

