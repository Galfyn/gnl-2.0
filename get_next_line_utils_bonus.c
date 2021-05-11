#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *) s;
	i = 0;
	while (str[i] != (char) c)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	return (str + i);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

t_gnl	*ft_lstnew(int fd)

{
	t_gnl	*new;

	new = ((t_gnl *)malloc(sizeof(t_gnl)));
	if (!new)
		return (NULL);
	new->fd = fd;
	new->remain = NULL;
	new->next = NULL;
	return (new);
}

t_gnl	*listClear(t_gnl *temp, t_gnl **root)
{
	t_gnl	*list;

	list = *root;
	if (list == temp)
	{
		*root = temp->next;
		free(temp);
		return (*root);
	}
	while (list->next != temp)
		list = list->next;
	list->next = temp->next;
	free(temp);
	return (list);
}
