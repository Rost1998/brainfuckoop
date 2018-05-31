# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/13 18:49:17 by rtulchiy          #+#    #+#              #
#    Updated: 2018/05/31 19:36:42 by rtulchiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainfuck

OBJSRC = main.cpp InterpretBrainfuck.cpp Print.cpp ToDown.cpp ToNext.cpp\
		 ToPrev.cpp ToUp.cpp WhileEnd.cpp WhileSt.cpp 

OBJC = $(OBJSRC:%.cpp=srcs/%.cpp)
OBJO = $(OBJSRC:.cpp=.o)
CFLAGS = -Wall -Werror -Wextra -std=c++98

%.o: srcs/%.cpp
	clang++ $(CFLAGS) -c $< -I includes

all: $(NAME)

$(NAME): $(OBJO)
	clang++ $(CFLAGS) -o $(NAME) $(OBJO)

clean:
	rm -f $(OBJO)

fclean: clean
	rm -f $(NAME)

re: fclean all
