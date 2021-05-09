#ifndef		GET_NEXT_LINE_H
# define	GET_NEXT_LINE_H
# ifndef	BUFFER_SIZE
# define	BUFFER_SIZE 32
# endif
#include <stdlib.h>
#include <unistd.h>

int		get_next_line(int fd, char **line);
size_t	ft_strlen(const char *s);
char    *ft_strchr(const char *s, int c);

#endif
