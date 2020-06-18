#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char	arr1[10] = "hellothere";
	char	arr2[10] = "abcde";

	ft_strncpy(arr1, arr2, 8);
	//strncpy(arr1, arr2, 8);
	printf("%s", arr1);
}
