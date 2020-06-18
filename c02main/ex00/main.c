#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int		main(void)
{
	char	dest[6];

	ft_strcpy(dest, "hello");
	printf("%s", dest);
}
