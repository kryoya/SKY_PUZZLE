#include <stdbool.h>
#include "fill_finish.h"

bool	finish_check(int	s_ary[4][4])
{
	int		width;
	int		height;
	int		ok;

	width = 0;
	height = 0;
	ok = true;
	while (height < 4)
	{
		width = 0;
		while (width < 4)
		{
			if (s_ary[height][width] != -1)
				ok = false;
			width++;
		}
		height++;
	}
	return (ok);
}
