#include <unistd.h>
#include <stdio.h>

extern void ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int tab[5] = {5, 2, 3, 1, 4};
	ft_sort_int_tab(tab, 5);
	printf("%d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
