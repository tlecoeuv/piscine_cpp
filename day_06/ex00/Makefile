NAME		=	convert
SRCS		=	convert.cpp display.cpp utils.cpp main.cpp
OBJS		=	$(SRCS:.cpp=.o)
CXX		=	clang++
CFLAGS		=	-Wall -Wextra -Werror
all:		$(NAME)
$(NAME):	$(OBJS)
		$(CXX) $(CFLAGS) -o $(NAME) $(OBJS)
clean:
		rm -rf $(OBJS)
fclean:		clean
		rm -rf $(NAME)
re:		fclean all
.PHONY:		clean fclean re all
