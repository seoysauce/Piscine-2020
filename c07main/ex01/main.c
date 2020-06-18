#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int *arr = ft_range(5, 5);
	
		printf("%p\n", arr);
}
