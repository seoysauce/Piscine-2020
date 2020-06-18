#include <stdio.h>
#include "ft_stock_str.h"

void ft_putchar(char ch);
int	ft_strlen(char *str);
void ft_putstr(char *str);
void ft_putnbr(int nb);
void ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	t_stock_str strc;
	ft_show_tab(&strc);
}
