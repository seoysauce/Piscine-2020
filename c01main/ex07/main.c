#include <stdio.h>

void        ft_rev_int_tab(int *tab, int size);

int        main(void)
{
    int tab[5] = {1, 2, 3, 4, 5};
    int i;
    
    ft_rev_int_tab(tab, 5);
    i = 0;
    while (i < 5) {
        printf("%d", tab[i]);
        i++;
    }
}
