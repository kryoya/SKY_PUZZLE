#include <stdbool.h>
#include "check_sub.h"

void	init_line_val(int	*s_idx, int	*cnt, int	*more, bool	*zero)
{
	*s_idx = 0;
	*cnt = 0;
	*more = 0;
	*zero = true;
	return ;
}

void	compare_val(int	s_data, int	*more, int	*cnt)
{
	if (*more < s_data)
	{
		*more = s_data;
		*cnt += 1;
	}
	return ;
}
