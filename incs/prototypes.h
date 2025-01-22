#ifndef prototypes_H
# define prototypes_H

/* Extern prototypes */
#include "prots/btree_prots.h"
#include "prots/printf_prots.h"
#include "prots/strings.h"
#include "prots/list_prots.h"

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

#endif