#include "my_libc.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size -1)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size -1] = temp;
		i++;
		size--;
	}
}