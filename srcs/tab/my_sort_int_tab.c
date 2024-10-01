#include "my_Libc.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	i;
	int	swap;

	c = 0;
	i = 0;
	while (c <= size - 1)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		c++;
		i = 0;
	}
}