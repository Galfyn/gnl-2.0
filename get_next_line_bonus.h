#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef	BUFFER_SIZE
#  define	BUFFER_SIZE 32
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
typedef struct s_get_next_line{
	int						fd;
	char					*remain;
	struct s_get_next_line	*next;
}	t_gnl;

int			get_next_line(int fd, char **line);
char		*ft_strchr(const char *s, int c);
size_t		ft_strlen(const char *s);
t_gnl		*ft_lstnew(int fd);
t_gnl		*listClear(t_gnl *temp, t_gnl **root);
char		*ft_clean(char *remain);
#endif
