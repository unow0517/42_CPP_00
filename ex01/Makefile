CC := c++
FLAGS := -Wall -Wextra -Werror -std=c++98
SRCS = PhoneBook.cpp Contact.cpp Main.cpp
OBJS = $(SRCS:.cpp=.o) #OBJS = list of object files

NAME := phonebook

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@ 

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
