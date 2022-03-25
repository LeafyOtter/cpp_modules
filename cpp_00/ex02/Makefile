NAME	=	Accountant

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	Account.cpp tests.cpp

all		: ${NAME}

$(NAME) : $(SRCS) Account.hpp
	$(CC) $(CFLAGS) $(SRCS) -o $@

clean	:
	rm -f $(NAME)