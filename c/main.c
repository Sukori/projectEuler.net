#include "euler.h"

int	main(int c, char *v[], char *e[])
{
	char	*usr_input;
	(void)c;
	(void)v;
	(void)e;
	while (42)
	{
		usr_input = readline("1. Multiples of 3 and 5\n \
Select the problem you wish to solve > ");
		if (!ft_strncmp(usr_input, "1", 2))
			break ;
		else
			ft_printf("Invalid input\n");
		free(usr_input);
	}
	run_problem(usr_input);
	free(usr_input);
	return (0);
}