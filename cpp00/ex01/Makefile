NAME	= phonebook
	
CXX		= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

SRC		= Main.cpp Contact.cpp Phonebook.cpp
OBJ		= $(SRC:.cpp=.o)

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN)    - Executable is ready.\n$(RESET)"

clean:
	@$(RM) $(OBJ)
	@printf "$(YELLOW)    - Object files are cleaned.$(RESET)\n"

fclean:
	@$(RM) $(NAME)
	@$(RM) $(OBJ)
	@printf "$(YELLOW)    - Executable is removed. $(GRAY)If there was any.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re