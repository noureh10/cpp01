# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 19:49:08 by nechaara          #+#    #+#              #
#    Updated: 2024/07/23 14:01:18 by nechaara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

OBJ_DIR = objects
SRCS = Zombie.cpp main.cpp randomChump.cpp newZombie.cpp
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))
FLAGS = -std=c++98 -Wall -Wextra -Werror #-fsanitize=address

all : $(NAME)

$(NAME) : $(OBJS)
	@c++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "zombie created successfully !"
	@echo "use it this way : ./zombie"
	

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@c++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Cleaned object files." 
fclean: clean
	@rm -f $(NAME)
	@echo "Cleaned executable."

re: fclean all

.PHONY: all clean fclean re