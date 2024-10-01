#include <stdlib.h>

static int	my_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static void	fill_string(char *str, int size, char **strs, char *sep)
{
	int	i;
	int	k;

	i = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k])
			*str++ = strs[i][k++];
		k = 0;
		while (i < size - 1 && sep[k])
			*str++ = sep[k++];
		i++;
	}
	*str = 0;
}

static int	get_bytes(int i, int size, char **strs)
{
	int	bytes;

	bytes = 0;
	while (i < size)
		bytes += my_strlen(strs[i++]);
	return (bytes);
}

char	*my_strjoin_matrix(int size, char **strs, char *sep)
{
	char	*str;
	int		bytes;
	int		i;

	if (size == 0)
		return (malloc(1));
	i = 0;
	bytes = get_bytes(i, size, strs);
	str = malloc(bytes + (size - 1) * my_strlen(sep) + 1);
	if (!str)
		return (NULL);
	fill_string(str, size, strs, sep);
	return (str);
}