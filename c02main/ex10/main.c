
#include <stdio.h>
#include <string.h>

extern unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	char str1[] = "hellothere";
	char str2[] = "abcde";
	
	printf("%u ", ft_strlcpy(str1, str2, 3));
	// printf("%lu ", strlcpy(str1, str2, 3));
}
