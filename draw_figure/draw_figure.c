#include <figd.h>

void	ft_list_free(t_list *begin_list)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = 0;
	tmp2 = begin_list;
	while (tmp2)
	{
		tmp = tmp2->next;
		free(tmp2);
		tmp2 = tmp;
	}
}

t_list	*ft_create_link(int num, figure)
{
	t_list	*link;

	link = malloc(sizeof(t_list));
	if (link)
	{
		link->number = num;
		link->figure = figure;
		link->next = 0;
	}
	return (link);
}

void	ft_push_link(t_list *begin_list, int num, figure)
{
	t_list	*link;

	if (begin_list)
	{
		link = ft_create_link(num, figure);
		if (link == 0)
		{
			ft_list_free(begin_list);
			write(2, "Memory allocation error\n", 24);
			exit ;
		}
		link->next = begin_list;
		begin_list = link;
	}
	else
		begin_list = ft_create_link(num, figure);
}

t_list	*ft_create_list(void)
{
	t_list	*list;

	list = ft_create_link(0, rectangle);
	ft_push_link(list, 1, triangle);
	ft_push_link(list, 2, circle);
	ft_push_link(list, 3, heart);
	ft_push_link(list, 4, parallelogram);
	ft_push_link(list, 5, ellipse);
	ft_push_link(list, 6, star);
	return (list);
}

void	draw_figure(int fignum, int *dimensions)
{
	t_list	*figures;

	figures = ft_create_list(void);
	while (figures)
	{
		if (fignum == figures->number)
			figures->figure(dimensions);
		figures = figures->next;
	}
	write(1, "\n", 1);
}
