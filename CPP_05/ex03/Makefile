NAME = bureaucrat
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = 	main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			Intern.cpp

OBJECTS = $(SOURCES:.cpp=.o)

HEADER = 	Bureaucrat.hpp \
 			Form.hpp \
 			ShrubberyCreationForm.hpp \
 			RobotomyRequestForm.hpp \
 			PresidentialPardonForm.hpp \
 			Intern.hpp

$(NAME): Makefile $(OBJECTS) $(HEADER)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJECTS)
$(OBJECTS): $(SOURCES)
	$(CPP) $(CPPFLAGS) -c $(SOURCES)

all : $(NAME)
clean:
	rm -rf $(OBJECTS)
fclean:
	rm -rf $(OBJECTS) $(NAME) *_shrubbery
re:	fclean all

.PHONY: all clean fclean re