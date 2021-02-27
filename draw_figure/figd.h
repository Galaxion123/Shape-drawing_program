#ifndef FIGD_H
#define FIGD_H

#include <unistd.h>
#include <stdlib.h>

typedef	void	(*figure)(int*);

typedef struct		s_list
{
	int		number;
//	typedef void	(*figure)(int*);
	struct	s_list	*next;
}			t_list;

void	rectangle(int *dimensions);
void	triangle(int *dimensions);
void	circle(int *dimensions);
void	heart(int *dimensions);
void	parallelogram(int *dimensions);
void	ellipse(int *dimensions);
void	star(int *dimensions);
void	draw_figure(int fignum, int *dimensions);

#endif
