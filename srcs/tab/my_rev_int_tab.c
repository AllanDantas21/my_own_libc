#include "my_libc.h"

/**
 * @file my_rev_int_tab.c
 * @brief Reverses the elements of an integer array.
 *
 * This function takes an array of integers and its size, and reverses the order
 * of the elements in the array.
 *
 * @param tab Pointer to the array of integers to be reversed.
 * @param size The number of elements in the array.
 */
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