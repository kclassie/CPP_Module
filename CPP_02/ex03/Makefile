NAME = fixed
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADER = Fixed.hpp Point.hpp

$(NAME): Makefile $(OBJECTS) $(HEADER)
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