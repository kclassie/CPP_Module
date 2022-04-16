NAME = phonebook
SOURCES	= main.cpp PhoneBook.cpp Contact.cpp
CPP		= c++
CPPFLAGS	= -Werror -Wall -Wextra -std=c++98
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = PhoneBook.hpp Contact.hpp

all	: 	$(NAME)
$(NAME): $(OBJECTS)
		@$(CPP) $(CPPFLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp Makefile $(HEADERS)
	$(CPP) $(CPPFLAGS) -c $< -o $@
clean:
		@rm -f $(OBJECTS)
fclean:	clean
		@rm -f $(NAME)
re:		fclean all

.PHONY:	all clean fclean re