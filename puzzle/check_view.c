#include <stdbool.h>
#include "check_view.h"
#include "check_sub.h"

void	view_top_col(int	c_ary[4][4], int	s_ary[4][4], bool	*top_chk)
{
	int		s_idx;
	int		c_idx;
	int		cnt_view;
	int		more_taller;
	bool	zero_chk;

	c_idx = 0;
	init_line_val(&s_idx, &cnt_view, &more_taller, &zero_chk);
	while (*top_chk && c_idx < 4)
	{
		init_line_val(&s_idx, &cnt_view, &more_taller, &zero_chk);
		while (*top_chk && s_idx < 4)
		{
			if (s_ary[s_idx][c_idx] == 0)
				zero_chk = false;
			compare_val(s_ary[s_idx][c_idx], &more_taller, &cnt_view);
			s_idx++;
		}
		if (c_ary[0][c_idx] != cnt_view && zero_chk == true)
			*top_chk = false;
		c_idx++;
	}
	return ;
}

void	view_btm_col(int	c_ary[4][4], int	s_ary[4][4], bool	*btm_chk)
{
	int		s_idx;
	int		c_idx;
	int		cnt_view;
	int		more_taller;
	bool	zero_chk;

	c_idx = 0;
	init_line_val(&s_idx, &cnt_view, &more_taller, &zero_chk);
	while (*btm_chk && c_idx < 4)
	{
		init_line_val(&s_idx, &cnt_view, &more_taller, &zero_chk);
		while (*btm_chk && s_idx < 4)
		{
			if (s_ary[3 - s_idx][c_idx] == 0)
				zero_chk = false;
			compare_val(s_ary[3 - s_idx][c_idx], &more_taller, &cnt_view);
			s_idx++;
		}
		if (c_ary[1][c_idx] != cnt_view && zero_chk == true)
			*btm_chk = false;
		c_idx++;
	}
	return ;
}

void	view_left_line(int	c_ary[4][4], int	s_ary[4][4], bool	*lt_chk)
{
	int		s_idx;
	int		c_idx;
	int		cnt_view;
	int		more_taller;
	bool	zero_chk;

	c_idx = 0;
	init_line_val(&s_idx, &cnt_view, &more_taller, &zero_chk);
	while (*lt_chk && c_idx < 4)
	{
		init_line_val(&s_idx, &cnt_view, &more_taller, &zero_chk);
		while (*lt_chk && s_idx < 4)
		{
			if (s_ary[c_idx][s_idx] == 0)
				zero_chk = false;
			compare_val(s_ary[c_idx][s_idx], &more_taller, &cnt_view);
			s_idx++;
		}
		if (c_ary[2][c_idx] != cnt_view && zero_chk == true)
			*lt_chk = false;
		c_idx++;
	}
	return ;
}

void	view_right_line(int	c_ary[4][4], int	s_ary[4][4], bool	*rt_chk)
{
	int		s_idx;
	int		c_idx;
	int		cnt_view;
	int		more_taller;
	bool	zero_chk;

	c_idx = 0;
	init_line_val(&s_idx, &cnt_view, &more_taller, &zero_chk);
	while (*rt_chk && c_idx < 4)
	{
		init_line_val(&s_idx, &cnt_view, &more_taller, &zero_chk);
		while (*rt_chk && s_idx < 4)
		{
			if (s_ary[c_idx][3 - s_idx] == 0)
				zero_chk = false;
			compare_val(s_ary[c_idx][3 - s_idx], &more_taller, &cnt_view);
			s_idx++;
		}
		if (c_ary[3][c_idx] != cnt_view && zero_chk == true)
			*rt_chk = false;
		c_idx++;
	}
	return ;
}

bool	check_view(int	c_ary[4][4], int	s_ary[4][4])
{
	bool	top_chk;
	bool	btm_chk;
	bool	lt_chk;
	bool	rt_chk;

	top_chk = true;
	btm_chk = true;
	lt_chk = true;
	rt_chk = true;
	view_top_col(c_ary, s_ary, &top_chk);
	view_btm_col(c_ary, s_ary, &btm_chk);
	view_left_line(c_ary, s_ary, &lt_chk);
	view_right_line(c_ary, s_ary, &rt_chk);
	if (top_chk && btm_chk && rt_chk && lt_chk)
		return (false);
	else
		return (true);
}
