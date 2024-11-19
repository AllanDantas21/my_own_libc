#include "my_libc.h"

char	*my_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = my_strlen(s);
	if (start >= s_len)
		return (my_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	my_strlcpy(sub, s + start, len + 1);
	return (sub);
}
