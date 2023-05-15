#include <stdbool.h>
#include <unistd.h>
#include "input_clue.h"
#include "init_nl_array.h"
#include "change_fix.h"
#include "fill_box.h"

int	main(int argc, char *argv[])
{
	int		c_ary[4][4];
	int		s_ary[4][4];
	bool	f_ary[4][4];

	input_clue(argv, c_ary);
	init_s_ary(s_ary);
	init_f_ary(f_ary);
	find_can_fix(s_ary, f_ary, c_ary);
	fill_box(c_ary, s_ary, f_ary, 0);
	return (0);
}
