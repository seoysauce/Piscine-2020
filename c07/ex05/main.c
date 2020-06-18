#include <stdio.h>

char **ft_split(char *str, char *charset);
int	word_count(char *str, char *charset);

int	main(void)
{
	char *str = "   abcd, efg h,jk,,,";
	char *charset = ", ";
	char **result;
	int i = 0;
	int wc;

	result = ft_split(str, charset);
	wc = word_count(str, charset);
	
	while (i < wc)
	{
		printf("%s\n", result[i++]);
	}
}
