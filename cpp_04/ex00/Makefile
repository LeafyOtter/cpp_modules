NAME	:= Animals # By Martin Garrix, released in 2013

CC = c++ -Wall -Wextra -Werror -std=c++98 -g

SRCS :=	Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp
OBJS := $(SRCS:.cpp=.o)
DEPS :=	$(OBJS:.o=.d)
IFLAGS := -MMD -MP

$(NAME):	${OBJS}
	${CC} ${IFLAGS} -o $@ ${OBJS}

.cpp.o:
	${CC} ${IFLAGS} -c $<

clean:
	rm -f *.o *.d ${NAME}

re:	clean ${NAME}

-include ${DEPS}