NAME :=	FragTrap

all	:	$(NAME)

$(NAME) : main.cpp ClapTrap.o ScavTrap.o FragTrap.o ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp ClapTrap.o ScavTrap.o FragTrap.o -o $(NAME)

ClapTrap.o : ClapTrap.cpp ClapTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c ClapTrap.cpp -o $@

ScavTrap.o : ScavTrap.cpp ScavTrap.hpp ClapTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c ScavTrap.cpp -o $@

FragTrap.o : FragTrap.cpp FragTrap.hpp ClapTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c FragTrap.cpp -o $@

clean	:
	rm -f $(NAME)
	rm -f *.o