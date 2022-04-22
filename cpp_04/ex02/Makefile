NAME	:= Animals # By Martin Garrix, released in 2013

CC = c++ -Wall -Wextra -Werror -std=c++98 -g

SRCS :=	AAnimal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp
OBJS := $(SRCS:.cpp=.o)
DEPS :=	$(OBJS:.o=.d)
#FSAN := -fsanitize=leak
IFLAGS := -Wall -Wextra -Werror -std=c++98 -g -MMD -MP ${FSAN}

$(NAME):	${OBJS}
	${CC} ${IFLAGS} -o $@ ${OBJS}

.cpp.o:
	${CC} ${IFLAGS} -c $<

clean:
	rm -f *.o *.d ${NAME}

re:	clean ${NAME}

-include ${DEPS}