NAME = account
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SOURCES = Account.cpp tests.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADER = Account.hpp

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