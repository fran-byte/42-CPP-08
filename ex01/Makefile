# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/27 20:32:43 by frromero          #+#    #+#              #
#    Updated: 2025/12/30 15:51:38 by frromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
INCLUDES = -I .

SRC =	main.cpp Spam.cpp
		
OBJ = $(SRC:.cpp=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(INCLUDES) $(OBJ) -o $(NAME)
	@echo "$(NAME) created."

clean:
	@rm -f $(OBJ)
	@echo "Object files deleted."

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted."

re: fclean all

.PHONY: all clean fclean re
