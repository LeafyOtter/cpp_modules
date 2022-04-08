NAME :=	ScavTrap

all	:	$(NAME)

$(NAME) : main.cpp ClapTrap.o ScavTrap.o ClapTrap.hpp ScavTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp ClapTrap.o ScavTrap.o -o $(NAME)

ClapTrap.o : ClapTrap.cpp ClapTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c ClapTrap.cpp -o $@

ScavTrap.o : ScavTrap.cpp ScavTrap.hpp ClapTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c ScavTrap.cpp -o $@

clean	:
	rm -f $(NAME)
	rm -f *.o