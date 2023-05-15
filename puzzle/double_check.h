#ifndef _DOUBLE_CHECK_H_
#define _DOUBLE_CHECK_H_

void	init_check_array(int	check_array[4]);

void	check_check_array(int	check_array[4], bool	**double_check);

void	double_line_check(int	s_ary[4][4], bool	*line_check);

void	double_col_check(int	s_ary[4][4], bool	*column_check);

bool	double_num_check(int	s_ary[4][4]);

#endif // _DOUBLE_CHECK_H_
