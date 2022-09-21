# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 12:46:44 by hchakoub          #+#    #+#              #
#    Updated: 2022/09/21 08:07:10 by hchakoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP=c++
FLAGS=-Wall -Wextra -Werror  -std=c++98
SRC=main.cpp Span.cpp
OBJ=$(SRC:.cpp=.o)
NAME=span

all: $(NAME)

%.o : %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $^ -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
