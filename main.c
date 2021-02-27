#include "draw_figure/figd.h"
#include "check_args/parse.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
		draw_figure(arg_parse(argv[1]), ft_atoi(0, 0));
	else if (argc == 3)
		draw_figure(arg_parse(argv[1]), ft_atoi(argv[2], argv[3]));
	return (0);
}
