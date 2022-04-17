NAME = string
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SOURCES = main.cpp
OBJECTS = $(SOURCES:.cpp=.o)

$(NAME): Makefile $(OBJECTS)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJECTS)
$(OBJECTS): $(SOURCES)
	$(CPP) $(CPPFLAGS) -c $(SOURCES)

all : $(NAME)
clean:
	rm -rf $(OBJECTS)
fclean:
	rm -rf $(OBJECTS) $(NAME)
re:	fclean all

.PHONY: all clean fclean re