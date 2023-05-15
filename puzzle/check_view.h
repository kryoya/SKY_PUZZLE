#ifndef _CHECK_VIEW_H_
#define _CHECK_VIEW_H_

void	view_top_col(int	c_ary[4][4], int	s_ary[4][4], bool	*top_chk);

void	view_bottom_col(int	c_ary[4][4], int	s_ary[4][4], bool	*btm_chk);

void	view_left_line(int	c_ary[4][4], int	s_ary[4][4], bool	*lt_chk);

void	view_right_line(int	c_ary[4][4], int	s_ary[4][4], bool	*rt_chk);

bool	check_view(int	c_ary[4][4], int	s_ary[4][4]);

#endif // _CHECK_VIEW_H_
