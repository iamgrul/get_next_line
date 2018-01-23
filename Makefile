all:
	gcc -g -Wall -Werror -Wextra main.c get_next_line.c -L./libft -lft
	./a.out

clean:

fclean:

re:


lib:
	@$(MAKE) -C ./libft/ all 

lc:
	@$(MAKE) -C ./libft/ clean