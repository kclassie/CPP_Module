NAME = megaphone
SOURCES	= megaphone.cpp
CPP		= c++
CPPFLAGS = -Werror -Wall -Wextra
OBJECTS = $(SOURCES:.cpp=.o)

all	: 	$(NAME)
$(NAME): $(OBJECTS)
		@$(CPP) $(CPPFLAGS) $(OBJECTS) -o $(NAME)
%.o : %.cpp Makefile
	$(CPP) $(CPPFLAGS) -c $< -o $@
clean:
		@rm -f $(OBJECTS)
fclean:	clean
		@rm -f $(NAME)
re:		fclean all

.PHONY:	all clean fclean re