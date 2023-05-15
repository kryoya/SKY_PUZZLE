#include <unistd.h>
#include "print_func.h"

void	print_char(char	c)
{
	write(1, &c, 1);
	return ;
}

void	print_error(void)
{
	print_char('e');
	print_char('r');
	print_char('r');
	print_char('o');
	print_char('r');
	print_char('\n');
	return ;
}

void	prt_trns_array(int	s_ary[4][4])
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
			print_char('0' + s_ary[height][width]);
			s_ary[height][width] = -1;
			if (width != 3)
				print_char(' ');
			width++;
		}
		print_char('\n');
		height++;
	}
	return ;
}
