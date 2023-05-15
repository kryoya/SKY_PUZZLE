#include <stdbool.h>
#include "change_fix.h"

void	fix_four(int	s_ary[4][4], bool	f_ary[4][4], int	c_idx, int	way)
{
	int		s_idx;

	s_idx = 0;
	while (s_idx < 4)
	{
		if (way <= 1)
		{
			if (way == 0)
				s_ary[s_idx][c_idx] = s_idx + 1;
			else if (way == 1)
				s_ary[s_idx][c_idx] = 4 - s_idx;
			f_ary[s_idx][c_idx] = true;
		}
		else
		{
			if (way == 2)
				s_ary[c_idx][s_idx] = s_idx + 1;
			else if (way == 3)
				s_ary[c_idx][s_idx] = 4 - s_idx;
			f_ary[c_idx][s_idx] = true;
		}
		s_idx++;
	}
	return ;
}

void	fix_one(int	s_ary[4][4], bool	f_ary[4][4], int	c_idx, int	way)
{
	if (way == 0)
	{
		s_ary[0][c_idx] = 4;
		f_ary[0][c_idx] = true;
	}
	else if (way == 1)
	{
		s_ary[3][c_idx] = 4;
		f_ary[3][c_idx] = true;
	}
	else if (way == 2)
	{
		s_ary[c_idx][0] = 4;
		f_ary[c_idx][0] = true;
	}
	else
	{
		s_ary[c_idx][3] = 4;
		f_ary[c_idx][3] = true;
	}
	return ;
}

void	find_can_fix(int	s_ary[4][4], bool	f_ary[4][4], int	c_ary[4][4])
{
	int		c_idx;
	int		way;

	c_idx = 0;
	way = 0;
	while (way < 4)
	{
		c_idx = 0;
		while (c_idx < 4)
		{
			if (c_ary[way][c_idx] == 4)
				fix_four(s_ary, f_ary, c_idx, way);
			if (c_ary[way][c_idx] == 1)
				fix_one(s_ary, f_ary, c_idx, way);
			c_idx++;
		}
		way++;
	}
}
