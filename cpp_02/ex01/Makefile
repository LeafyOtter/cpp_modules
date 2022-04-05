NAME :=	UsefulClass

all	:	$(NAME)

$(NAME) : main.cpp Fixed.cpp Fixed.hpp
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp Fixed.cpp -o $(NAME)

clean	:
	rm -f $(NAME)