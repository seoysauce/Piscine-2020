#include <stdio.h>
#include <string.h>
#include <stddef.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char *str = "this is a copy";
	char *new;
	new = ft_strdup(str);
	printf("%s\n", new);
	int *ppp;
	int pp[3] = {1,2,3};
	printf("%p\n",pp);
	printf("%p\n",&pp[0]);
	printf("%p\n",&pp);
	printf("%p\n",ppp);
}
