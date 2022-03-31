NAME = Scream.exe

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp Harl.cpp
all		: ${NAME}

$(NAME) : $(SRCS) Harl.hpp
	$(CC) $(CFLAGS) $(SRCS) -o $@

clean	:
	rm -f $(NAME)