#include "get_next_line.h"


# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

int main(int argc, char **argv)
{
	int fd;
	char *line;
argv[0][0] = argc;
	line = NULL;

	fd = open("1.txt", O_RDONLY);
int fd2 = open("1.1.txt", O_RDONLY);
	((get_next_line(fd, &line)));
			ft_putendl(line);
				((get_next_line(fd2, &line)));
			ft_putendl(line);
				((get_next_line(fd, &line)));
			ft_putendl(line);
				((get_next_line(fd2, &line)));
			ft_putendl(line);
	return (0);
}