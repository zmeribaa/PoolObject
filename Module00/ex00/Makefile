NAME 	=	a.out
CC		= 	c++
SRC		=	DivideAndRule.cpp
FLAGS	= -std=c++98 -Wall -Wextra -Werror -g3

all : $(NAME)

$(NAME):
	@clear
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo "\033[0;32mCompiled (｡•̀ᴗ-)✧\033[0m"

clean :
	@echo "\033[0;31mCleaned ʕ ಡ ﹏ ಡ\033[0m"

fclean: clean
	@(rm -rf $(NAME))
	@rm -rf *.dSYM
	@echo "\033[0;31mCleaned ʕ ಡ ﹏ ಡ\033[0m"

re:	fclean all

.PHONY : clean fclean re