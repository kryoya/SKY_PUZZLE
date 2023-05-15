#include <stdbool.h>
#include "double_check.h"

void	init_check_array(int	chk_array[4])
{
	int		ary_idx;

	ary_idx = 0;
	while (ary_idx < 4)
	{
		chk_array[ary_idx] = 0;
		ary_idx++;
	}
	return ;
}

void	check_check_array(int	chk_array[4], bool	**double_chk)
{
	int		ary_idx;

	ary_idx = 0;
	while (ary_idx < 4 && **double_chk)
	{
		if (chk_array[ary_idx] >= 2)
			**double_chk = false;
		ary_idx++;
	}
	return ;
}

void	double_line_check(int	s_ary[4][4], bool	*line_chk)
{
	int		width;
	int		height;
	int		chk_line_index;
	int		chk_line_array[4];

	width = 0;
	height = 0;
	*line_chk = true;
	while (height < 4 && *line_chk)
	{
		init_check_array(chk_line_array);
		width = 0;
		while (width < 4 && *line_chk)
		{
			chk_line_index = s_ary[height][width] - 1;
			if (chk_line_index >= 0)
				chk_line_array[chk_line_index] += 1;
			width++;
		}
		check_check_array(chk_line_array, &line_chk);
		height++;
	}
	return ;
}

void	double_col_check(int	s_ary[4][4], bool	*col_chk)
{
	int		width;
	int		height;
	int		chk_col_index;
	int		chk_col_array[4];

	width = 0;
	height = 0;
	*col_chk = true;
	while (height < 4 && *col_chk)
	{
		init_check_array(chk_col_array);
		width = 0;
		while (width < 4 && *col_chk)
		{
			chk_col_index = s_ary[width][height] - 1;
			if (chk_col_index >= 0)
				chk_col_array[chk_col_index] += 1;
			width++;
		}
		check_check_array(chk_col_array, &col_chk);
		height++;
	}
	return ;
}

bool	double_num_check(int	s_ary[4][4])
{
	bool	line_chk;
	bool	col_chk;

	double_line_check(s_ary, &line_chk);
	double_col_check(s_ary, &col_chk);
	if (line_chk == true && col_chk == true)
		return (false);
	else
		return (true);
}
