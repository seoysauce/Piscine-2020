#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	char *str = "    --+-2147483648";
	
	printf("%d\n", ft_atoi(str));
	//printf("%d\n", atoi(str));
}
