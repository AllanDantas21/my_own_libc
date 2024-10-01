#include "my_libc.h"

char	*my_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_len;
	unsigned int	max_len;
	char			*sub;

	if (!s)
		return (NULL);
	s_len = my_strlen(s);
	if (start < s_len)
		max_len = s_len - start;
	if (start >= s_len)
		max_len = 0;
	if (max_len > len)
		max_len = len;
	sub = (char *)malloc((max_len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	my_strlcpy(sub, s + start, max_len + 1);
	return (sub);
}
