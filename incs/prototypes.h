#ifndef prototypes_H
# define prototypes_H

/** Tests **/

int		my_isalnum(const int i);
int		my_isalpha(const int i);
int		my_isascii(const int i);
int		my_isdigit(const int i);
int		my_isprint(const int i);
int		my_tolower(int c);
int		my_toupper(int ch);
int		my_atoi(const char *str);
int     my_strcmp(const char *s1, const char *s2);
int     my_strncmp(const char *restrict s1, const char *restrict s2, size_t n);
int		my_memcmp(const void *s1, const void *s2, size_t n);
int     my_atoi_base(char *str, char *base);
int		my_lstsize(t_list *lst);
int     my_count_matrix(char **matrix);
int     flood_fill(int x, int y, char **map);
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
void	*my_memmove(void *dest, const void *src, size_t n);
void	*my_memcpy(void *dest, const void *src, size_t n);
void	*my_memchr(const void *str, int c, size_t n);
void	*my_memset(void *s, int c, size_t n);
void	*my_calloc(size_t n, size_t size);
void	my_putendl_fd(char *s, int fd);
void	my_putchar_fd(char c, int fd);
void	my_putstr_fd(char *s, int fd);
void	*my_bzero(void *s, size_t n);
void	my_putnbr_fd(int n, int fd);
void	my_striteri(char *s, void (*f)(unsigned int, char*));
void	my_lstadd_back(t_list **lst, t_list *new);
void	ft_rev_int_tab(int *tab, int size);
t_list	*my_lstnew(void *content);
t_list	*my_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*my_lstlast(t_list *lst);
t_list  *my_list_at(t_list *begin_list, unsigned int nbr);
t_list  *my_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void    my_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)());
void    my_list_foreach(t_list *begin_list, void (*f)(void *));
void	my_lstiter(t_list *lst, void (*f)(void *));
void	my_lstdelone(t_list *lst, void (*del)(void *));
void	my_lstclear(t_list **lst, void (*del)(void *));
void	my_lstadd_front(t_list **lst, t_list *new);
void    my_list_reverse(t_list **begin_list);
void    my_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));
void    my_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());
void    my_list_merge(t_list **begin_list1, t_list *begin_list2);
void    my_list_sort(t_list **begin_list, int (*cmp)());
void    my_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)());

// btree functions
void btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void btree_apply_infix(t_btree *root, void (*applyf)(void *));

// printf functions
int     my_printf_address(void *pointer);
int     my_print_unsigned(unsigned int n);
int     my_print_string(const char *str);
int     my_print_hexa(unsigned int n);
int     my_print_hexa_upper(unsigned int n);
int     my_print_decimal(int decimal);
int     my_print_char(char c);
char	*utoa_base(unsigned long long n, int base, char *chr);

// math functions

#endif