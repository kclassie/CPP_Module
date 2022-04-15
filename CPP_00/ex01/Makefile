NAME = phonebook
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
MAIN = main.cpp
SOURCE = Contact.cpp PhoneBook.cpp
OBJECT = $(SOURCE:.cpp=.o)

$(NAME): Makefile $(MAIN) $(OBJECT)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME) $(OBJECT)
$(OBJECT): $(SOURCE)
	$(CXX) $(CXXFLAGS) -c $(SOURCE)

all : $(NAME)
clean:
	rm -rf $(OBJECT)
fclean:
	rm -rf $(OBJECT) $(NAME)
re:	fclean all

.PHONY: all clean fclean re