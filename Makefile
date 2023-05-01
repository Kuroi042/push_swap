NAME = push_swap
MAME = checker


LIBFT_DIR = libft
LIBFT =  $(LIBFT_DIR)/libft.a
LIBFT_SRC = $(addprefix libft/, ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c)


GNL_DIR = gnl
GNL =  $(GNL_DIR)/get_next_line.a
GNL_SRC = $(addprefix gnl/, get_next_line.c get_next_line_utils.c)




FT_PRINTF_DIR = ft_printf
FT_PRINTF =  $(FT_PRINTF_DIR)/ft_printf.a
FTP_SRC = $(addprefix ft_printf/, ft_adress.c ft_printf.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putstring.c ft_putunsigned.c)




CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC_PS_BONUS = main_bonus.c push_swap_errors_bonus.c error_bonus.c tools_bonus.c instruction_bonus.c instruction_bonus2.c
SRC_PS = main.c push_swap_errors.c instructions_S.c sorting.c range.c ft_free.c tools.c parsing.c tools_2.c
OBJS_C = ${SRC_PS:.c=.o}
OBJS_C_BONUS = ${SRC_PS_BONUS:.c=.o}

all: $(NAME)
$(NAME):  $(OBJS_C)  $(LIBFT) $(LIBFT_SRC) $(FT_PRINTF)  $(FTP_SRC) 
	@$(CC)  $(CFLAGS) $(OBJS_C) $(LIBFT) $(FT_PRINTF) -o $(NAME)

bonus : $(MAME)
$(MAME): $(OBJS_C_BONUS) $(LIBFT) $(LIBFT_SRC)  $(FT_PRINTF) $(FTP_SRC)  $(GNL) $(GNL_DIR)
	@$(CC)  $(CFLAGS) $(OBJS_C_BONUS) $(LIBFT)   $(FT_PRINTF)  $(GNL) -o $(MAME)

 $(LIBFT): $(LIBFT_SRC)
	 @make -C $(LIBFT_DIR) all

 $(FT_PRINTF): $(FTP_SRC)
	 @make -C $(FT_PRINTF_DIR) all


 $(GNL): $(GNL_SRC)
	 @make -C $(GNL_DIR) all


clean :
	rm -rf  $(OBJS_C)
	rm -rf  $(OBJS_C_BONUS)
	@make -C  $(LIBFT_DIR)  clean
	@make -C  $(FT_PRINTF_DIR)  clean
	@make -C $(GNL_DIR) clean
fclean : clean
	rm -rf $(NAME) $(MAME)
	@make -C $(LIBFT_DIR) fclean
	@make -C $(FT_PRINTF_DIR) fclean
	@make -C $(GNL_DIR) fclean

re : fclean all bonus


