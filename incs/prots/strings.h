#ifndef STRINGS_H
# define STRINGS_H

char	*my_strnstr(const char *big, const char *little, size_t len);
char	*my_substr(char const *s, unsigned int start, size_t len);
char	*my_strmapi(char const *s, char (*f)(unsigned int, char));
char	*my_strtrim(char const *s1, char const *set);
char	*my_strjoin(char const *s1, char const *s2);
char	*my_strjoin_matrix(int size, char **strs, char *sep);
char	*my_strrchr(const char *str, int c);
char	*my_strchr(const char *str, int c);
char	**my_split(char const *s, char c);
char	**my_split_charset(char *str, char *charset);
char	*my_strdup(const char *s1);
char	*my_itoa(int n);
char    *my_strcpy(char *dest, const char *src);
size_t	my_strlcpy(char *dest, const char *src, size_t n);
size_t	my_strlcat(char *dest, const char *src, size_t size);
size_t	my_strlen(const char *str);
void    my_str_tolower(char *s);

#endif