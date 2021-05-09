
#include "get_next_line.h"

static char	*gnl_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*str;

	if (!s1)
		s1 = "";
	i = 0;
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (*s1 != '\0')
		str[i++] = *s1++;
	while (*s2 !='\0')
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

static char *gnl_copy(char *remain)
{
	size_t	i;
	char	*str;

	i =0;
	str = "";
	while (remain[i] != '\0')
	{
		i++;
		if (remain[i] == '\n')
			while (i--)
			{
				str[i] = remain[i];
			}
	}
	return (str);
}

int		get_next_line(int fd, char **line)
{
	static char	*remain;
	size_t 		read_size;
	char 		*buf;
	char 		*tmp;

	read_size = 1;
	if (fd < 0 || !line || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
		return (-1);
	buf = malloc(sizeof (char) * (BUFFER_SIZE + 1));
	while ((remain == NULL || !ft_strchr(remain, '\n')) && read_size > 0)
	{
		read_size = read(fd, buf, BUFFER_SIZE);
		buf[read_size] = '\0';
		tmp = remain;
		remain = gnl_strjoin(remain, buf);
		if (tmp)
			free(tmp);
		if (!remain)
			return (-1);
	}
	*line = gnl_copy(remain);
	free(buf);
	if (read_size == 0)
		return (0);
	return (1);
}
