#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *str;
	int a;

	a = ft_ultimate_range(&str, -1, -3);
	printf("%d\n", a);
}
