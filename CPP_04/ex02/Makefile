NAME = animals
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADER = Animal.hpp Cat.hpp Dog.hpp Brain.hpp

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