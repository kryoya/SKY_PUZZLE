#include <stdbool.h>
#include "init_nl_array.h"

void	init_s_ary(int	s_ary[4][4])
{
	int		width;
	int		height;

	width = 0;
	height = 0;
	while (height < 4)
	{
		width = 0;
		while (width < 4)
		{
			s_ary[height][width] = 0;
			width++;
		}
		height++;
	}
}

void	init_f_ary(bool	f_ary[4][4])
{
	int		width;
	int		height;

	width = 0;
	height = 0;
	while (height < 4)
	{
		width = 0;
		while (width < 4)
		{
			f_ary[height][width] = false;
			width++;
		}
		height++;
	}
	return ;
}
