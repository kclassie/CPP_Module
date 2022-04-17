NAME = weapon
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SOURCES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADER = HumanA.hpp HumanB.hpp Weapon.hpp

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