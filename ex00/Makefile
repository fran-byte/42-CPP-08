# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: p4c0 <p4c0@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/27 20:32:43 by frromero          #+#    #+#              #
#    Updated: 2025/12/31 16:47:39 by p4c0             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
INCLUDES = -I .

SRC =	main.cpp
		
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
