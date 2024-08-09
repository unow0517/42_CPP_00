CC := clang++
FLAGS := -Wall -Wextra -Werror -std=c++98
NAME := megaphone
SRC = $(NAME).cpp
OBJ = $(SRCS:%.cpp=%.o) #OBJ = list of object files

all:$(NAME)

$(NAME): $(OBJS)
	@$(CC) -o $(NAME) $(SRC)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@ 

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
