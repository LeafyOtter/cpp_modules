NAME	=	PhoneBook

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp PhoneBook.cpp Contact.cpp

all		: ${NAME}

$(NAME) : $(SRCS) Contact.hpp PhoneBook.hpp
	$(CC) $(CFLAGS) $(SRCS) -o $@

clean	:
	rm -f $(NAME)