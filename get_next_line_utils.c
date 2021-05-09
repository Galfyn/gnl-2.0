
#include "get_next_line.h"

char    *ft_strchr(const char *s, int c)
{
	size_t  i;
	char *str;

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


