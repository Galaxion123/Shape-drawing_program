#include "figd.h"

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
			putchar('o');
			putchar('\n');
			i++;
		}
		else
		{
			k = 1;
			if (i + 1 == height)
				putchar('o');
			else
				putchar('|');
			while (k < step)
			{
				if (i + 1 == height)
					putchar('-');
				else
					putchar(' ');
				k++;
			}
			if (step <= width)
				step++;
			if (i + 1 == height)
				putchar('o');
			else
				putchar('\\');
			putchar('\n');
			i++;
		}
	}
}
