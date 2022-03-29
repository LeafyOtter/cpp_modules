NAME = Violence

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

all		: ${NAME}

$(NAME) : main.cpp HumanA.o HumanB.o Weapon.o
	$(CC) $(CFLAGS) $^ -o $@

HumanA.o: HumanA.cpp HumanA.hpp
	$(CC) $(CFLAGS) -c HumanA.cpp -o HumanA.o

HumanB.o: HumanB.cpp HumanB.hpp
	$(CC) $(CFLAGS) -c HumanB.cpp -o HumanB.o

Weapon.o: Weapon.cpp Weapon.hpp
	$(CC) $(CFLAGS) -c Weapon.cpp -o Weapon.o

clean	:
	rm -f *.o
	rm -f $(NAME)