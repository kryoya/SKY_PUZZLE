#include <stdbool.h>
#include <unistd.h>
#include "check_view.h"
#include "double_check.h"
#include "print_func.h"
#include "fill_finish.h"
#include "fill_get.h"

void	fill_box(int	c_a[4][4], int	s_a[4][4], bool	f_a[4][4], int	cnt);

void	fill_search(int	c_a[4][4], int	s_a[4][4], bool	f_a[4][4], int	cnt)
{
	int		box_number;
	int		width;
	int		height;

	box_number = 1;
	get_index(cnt, &width, &height);
	while (box_number < 5)
	{
		s_a[height][width] = box_number;
		if (!check_view(c_a, s_a) && !double_num_check(s_a))
		{
			if (width == 3 && height == 3)
				prt_trns_array(s_a);
			else
				fill_box(c_a, s_a, f_a, cnt + 1);
			if (finish_check(s_a))
				return ;
		}
		box_number++;
	}
	return ;
}

void	fill_box(int	c_a[4][4], int	s_a[4][4], bool	f_a[4][4], int	cnt)
{
	int		box_number;
	int		width;
	int		height;
	int		fl_wh[2];

	get_index(cnt, &width, &height);
	get_not_fixed(f_a, fl_wh);
	if (f_a[height][width] == true)
	{
		if (width == 3 && height == 3)
			prt_trns_array(s_a);
		else
			fill_box(c_a, s_a, f_a, cnt + 1);
		return ;
	}
	else
	{
		fill_search(c_a, s_a, f_a, cnt);
		if (finish_check(s_a))
			return ;
		else if (width == fl_wh[0] && height == fl_wh[1])
			print_error();
		s_a[height][width] = 0;
		return ;
	}
}
