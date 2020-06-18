#include <stdio.h>

int length(char *str);
char *ft_strcat(char *dest, char *str);
char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *result;
	char *separator;

	char *string[100] = {"", "", "", ""}; 
	separator = ", ";
	result = ft_strjoin(4, string, separator);
	printf("%s\n", result);
}
