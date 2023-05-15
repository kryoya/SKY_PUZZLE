#include <stdbool.h>

void	get_index(int	cnt, int	*width, int	*height)
{
	*width = cnt % 4;
	*height = cnt / 4;
	return ;
}

void	get_not_fixed(bool	f_ary[4][4], int	fl_wh[2])
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
			if (f_ary[height][width] == false)
			{
				fl_wh[0] = width;
				fl_wh[1] = height;
				return ;
			}
			width++;
		}
		height++;
	}
	return ;
}
