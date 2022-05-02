NAME	:= Mutant

CC = c++ -Wall -Wextra -Werror -std=c++98 -g

SRCS :=	main.cpp
OBJS := $(SRCS:.cpp=.o)
DEPS :=	$(OBJS:.o=.d)
FSAN := -fsanitize=leak
IFLAGS := -MMD -MP ${FSAN}

$(NAME):	${OBJS}
	${CC} ${IFLAGS} -o $@ ${OBJS}

.cpp.o:
	${CC} ${IFLAGS} -c $<

clean:
	rm -f *.o *.d ${NAME}

re:	clean ${NAME}

-include ${DEPS}
