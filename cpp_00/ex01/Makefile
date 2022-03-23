NAME	=	PhoneBook

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp PhoneBook.cpp Contact.cpp

all		: ${NAME}

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $@

clean	:
	rm -f $(NAME)