NAME		= exception

SRCS		= Bureaucrat.cpp Form.cpp main.cpp

OBJS		= $(SRCS:.cpp=.o)

CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -f

all:		$(NAME)

.cpp.o:
			@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
		
clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re