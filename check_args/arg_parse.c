#include <stdlib.h>

int	str_cmp(char *str, char **table)
{
	int	i;
	int	k;
	int	equal;

	i = 0;
	while (table[i])
	{
		equal = 1;
		k = 0;
		while (str[k])
		{
			if (str[k] != table[i][k])
				equal = 0;
			k++;
		}
		if (equal)
			return (i);
		i++;
	}
	return (-1);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
        	i++;
	return (i);
}

char	*to_low(char *str)
{
	char	*res;
	int	i;

	i = 0;
	res = malloc(sizeof(res) * (str_len(str) + 1));
	if (res == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			res[i] = str[i] + 32;
		else
			res[i] = str[i];
		i++;
	}
	return (res);
}

int	arg_parse(char *fig)
{
	char	**figures;

	figures = malloc(sizeof(figures) * 8);
	figures[0] = "rectangle";
	figures[1] = "triangle";
	figures[2] = "circle";
	figures[3] = "heart";
	figures[4] = "parallelogram";
	figures[5] = "ellipse";
	figures[6] = "star";
	figures[7] = 0;
	return (str_cmp(to_low(fig), figures));
}
