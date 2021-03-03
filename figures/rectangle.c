#include "../draw_figure/figd.h"

void	rectangle(int *dimensions)
{
	int	x;
	int	y;
	int	i;
	int	n;

	x = dimensions[1];
	y = dimensions[0];
	i = 0;
	n = 0;
	while (i < y)
	{
		while (n < x)
		{
			if (((n == 0) || (n == (x - 1))) && ((i == 0) || (i == (y - 1))))
				ft_putchar('o');
			else if ((n > 0) && (n < (x - 1)) && ((i == 0) || (i == (y - 1))))
				ft_putchar('-');
			else if (((n == 0) || (n == (x - 1))) && ((i > 0) && (i < (y - 1))))
				ft_putchar('|');
			else
				ft_putchar(' ');
			n++;
		}
		ft_putchar('\n');
		n = 0;
		i++;
	}
}
