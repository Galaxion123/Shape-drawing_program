#ifndef FIGD_H
#define FIGD_H

#include <unistd.h>
#include <stdlib.h>

typedef struct		s_list
{
	int		number;
	typedef void	(*figure)(*int);
	struct	s_list	*next
}			t_list;

figure	rectangle(int *dimensions);
figure	triangle(int *dimensions);
figure  circle(int *dimensions);
figure  heart(int *dimensions);
figure  parallelogram(int *dimensions);
figure  ellipse(int *dimensions);
figure  star(int *dimensions);

#endif
