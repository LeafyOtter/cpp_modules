NAME = ZombieBrainz

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

all		: ${NAME}

$(NAME) : $(SRCS) Zombie.hpp
	$(CC) $(CFLAGS) $(SRCS) -o $@

clean	:
	rm -f $(NAME)