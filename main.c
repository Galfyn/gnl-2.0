#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"


int main()
{
	int i;
	int res;
	char *line = "lol";
	int fd;

	i = 190;
	fd = open("/Users/galfyn/my_projects/get_next_line/normal.txt", O_RDONLY);
	while (i--)
	{
		res = get_next_line(fd, &line);
		printf("%d | %s\n", res, line);
	}
}
