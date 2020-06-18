#include <unistd.h>


void	ft_swap(int *a, int *b);

void	print(char c, char c2)
{
	write(1, &c, 1);
	write(1, &c2, 1);
}

int		main(void)
{
	int a = 5;
	int b = 7;

	ft_swap(&a, &b);
	print(a + '0', b + '0');
}
