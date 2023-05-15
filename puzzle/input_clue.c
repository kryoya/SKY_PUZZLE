#include "input_clue.h"

void	get_only_num(char	*argv[], char	only_c_ary[16])
{
	int		argv_index;
	int		c_idx;

	argv_index = 0;
	c_idx = 0;
	while (argv[1][argv_index] != '\0')
	{
		if (argv[1][argv_index] != ' ')
		{
			only_c_ary[c_idx] = argv[1][argv_index];
			c_idx++;
		}
		argv_index++;
	}
	return ;
}

void	input_clue(char	*argv[], int	c_ary[4][4])
{
	int		only_index;
	int		c_idx;
	char	only_c_ary[16];

	get_only_num(argv, only_c_ary);
	only_index = 0;
	c_idx = 0;
	while (only_index < 16)
	{
		if (c_idx == 4)
			c_idx = 0;
		if (only_index < 4)
			c_ary[0][c_idx] = only_c_ary[only_index] - '0';
		else if (only_index < 8)
			c_ary[1][c_idx] = only_c_ary[only_index] - '0';
		else if (only_index < 12)
			c_ary[2][c_idx] = only_c_ary[only_index] - '0';
		else
			c_ary[3][c_idx] = only_c_ary[only_index] - '0';
		c_idx++;
		only_index++;
	}
	return ;
}
