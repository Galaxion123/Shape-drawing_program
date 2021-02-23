#include <figd.h>

void	draw_figure(int fignum, int *dimensions)
{
	t_list	*figures;

	figures = ft_create_list(void);
	while (figures)
	{
		if (fignum == figures->number)
			figures->figure;
		figures = figures->next;
	}
	write(1, "\n", 1);
}
