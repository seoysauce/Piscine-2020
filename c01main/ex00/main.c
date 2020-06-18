#include <unistd.h>

extern	void ft_ft(int *nbr);

void	print(char ch)
{
	write(1, &ch, 1);
}

int		main(void)
{
	int a;

	ft_ft(&a);
	print(a / 10 + '0');
	print(a % 10 + '0');
}
