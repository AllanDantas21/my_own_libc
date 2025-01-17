
/**
 * @file my_sort_int_tab.c
 * @brief Sorts an array of integers in ascending order using the bubble sort algorithm.
 *
 * This function takes an array of integers and its size, then sorts the array
 * in ascending order using the bubble sort algorithm. The algorithm repeatedly
 * steps through the list, compares adjacent elements and swaps them if they
 * are in the wrong order. The pass through the list is repeated until the list
 * is sorted.
 *
 * @param tab Pointer to the array of integers to be sorted.
 * @param size The number of elements in the array.
 */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	sorted;

	while (1)
	{
		sorted = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				sorted = 0;
			}
		}
		if (sorted)
			break;
		size--;
	}
}