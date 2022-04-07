NAME :=	BSP

all	:	$(NAME)

$(NAME) : main.cpp bsp.cpp Fixed.o Point.o
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp Fixed.cpp -o $(NAME)

Fixed.o : Fixed.cpp Fixed.hpp
	c++ -Wall -Wextra -Werror -std=c++98 Fixed.cpp -c -o $^

Point.o : Point.cpp Point.hpp Fixed.hpp
	c++ -Wall -Wextra -Werror -std=c++98 Fixed.cpp -c -o $^

clean	:
	rm -f $(NAME)