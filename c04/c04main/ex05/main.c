#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char str1[100] = "  ---2147483648";
	char str2[100] = "0123456789";

	ft_atoi_base(str1, str2);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%d\n", ft_atoi_base(str1, str2));
}
