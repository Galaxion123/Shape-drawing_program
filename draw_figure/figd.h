#ifndef FIGD_H
#define FIGD_H

#include <unistd.h>
#include <stdlib.h>

typedef struct		s_list
{
	int		number;
	typedef figure	(*f)(int, int);
	struct	s_list	*next
}			t_list;

#endif
