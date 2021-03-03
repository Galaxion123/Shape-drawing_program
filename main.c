#include "draw_figure/figd.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
		draw_figure(arg_parse(argv[1]), ft_atoi("20", "20"));
	else if (argc == 4)
		draw_figure(arg_parse(argv[1]), ft_atoi(argv[2], argv[3]));
	return (0);
}
