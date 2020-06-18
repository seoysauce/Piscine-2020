
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void    ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	char *tab[3];
	t_stock_str *strc;

	tab[0] = "hello";
	tab[1] = "hi";
	tab[2] = "abc";

	strc = ft_strs_to_tab(3, tab);
    ft_show_tab(strc);
	//int i;
//    while (strc->str != '\0')
//    {
//        printf("%s\n", strc->copy);
//        strc++;
//    }
//    printf("%lu\n", sizeof(t_stock_str));
//    i = 0;
//    while (strc[i].str != 0)
//    {
//        printf("%d\n", strc[i].size);
//        i++;
//    }
}
