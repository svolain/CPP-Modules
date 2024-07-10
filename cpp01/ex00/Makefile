NAME = brainz
FLAGS = -Wall -Wextra -Werror -g -std=c++11

SRCS = main.cpp \
		Zombie.cpp \
		newZombie.cpp\
		randomChump.cpp
		
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	g++ $(FLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re