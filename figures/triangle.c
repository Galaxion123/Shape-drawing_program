#include "../draw_figure/figd.h"

void	triangle(int *dimensions)
{
	int	height;
	int	width;
	int	i;
	int	k;
	int	step;

	height = dimensions[0];
	width = dimensions[1];
	i = 0;
	step = 1;
	while (i < height)
	{
		if (i == 0)
		{
			ft_putchar('o');
			ft_putchar('\n');
			i++;
		}
		else
		{
			k = 1;
			if (i + 1 == height)
				ft_putchar('o');
			else
				ft_putchar('|');
			while (k < step)
			{
				if (i + 1 == height)
					ft_putchar('-');
				else
					ft_putchar(' ');
				k++;
			}
			if (step <= width)
				step++;
			if (i + 1 == height)
				ft_putchar('o');
			else
				ft_putchar('\\');
			ft_putchar('\n');
			i++;
		}
	}
}
