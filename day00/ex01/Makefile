

NAME    = phonebook

SRC     = main.cpp contact.cpp repertory.cpp

CFLAG   = -Wall -Wextra -Werror

all:    $(NAME)

$(NAME):
				clang++ $(CFLAG) $(SRC) -I . -o $(NAME)

clean:
				rm -f *.o

fclean:
				clean
				rm -f $(NAME)

re:
				fclean
				all
