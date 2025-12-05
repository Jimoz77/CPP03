
NAME = result

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = ClapTrap.hpp Scavtrap.hpp
SRCS = ClapTrap.cpp main.cpp ScavTrap.cpp 

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp $(HEADERS)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
