#include "figd.h"

void	rectangle(int *dimensions)
{
	int	x;
	int	y;
	int	i;
	int	n;

	x = dimensions[0];
	y = dimensions[1];
	i = 0;
	n = 0;
	while (i < y)
	{
		while (n < x)
		{
			if (((n == 0) || (n == (x - 1))) && ((i == 0) || (i == (y - 1))))
				write(1, "o", 1);
			else if ((n > 0) && (n < (x - 1)) && ((i == 0) || (i == (y - 1))))
				write(1, "-", 1);
			else if (((n == 0) || (n == (x - 1))) && ((i > 0) && (i < (y - 1))))
				write(1, "|", 1);
			else
				write(1, " ", 1);
			n++;
		}
		write(1, "\n", 1);
		n = 0;
		i++;
	}
}
