
#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c);

int	main(void)
{
	char	*inputs[] = {"Hello 42 Paris", "Hello   world", "   Hello", "Hello   ", "", "     ", "Hello"};
	char	delimiters[] = {' ', ' ', ' ', ' ', ' ', ' ', ','};
	char	**result;
	int		t;
	int		i;

	t = 0;
	while (t < 7)
	{
		printf("\nTest %d: \"%s\"\n", t + 1, inputs[t]);
		result = ft_split(inputs[t], delimiters[t]);
		if (!result)
			return (printf("Allocation failed!\n"), 1);
		i = 0;
		if (!result[0])
			printf("Empty array\n");
		while (result[i])
		{
			printf("result[%d] = \"%s\"\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
		t++;
	}
	return (0);
}
