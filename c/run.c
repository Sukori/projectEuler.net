#include "euler.h"

void	run_problem(char *usr_input)
{
	char	*param35;
	int		i;

	if (!ft_strncmp(usr_input, "1", 2))
	{
		i = -1;
		while (i < 0)
		{
			param35 = readline("Enter the maximum number > ");
			i = -1;
			while (param35[++i] != 0)
			{
				if (!ft_isdigit(param35[i]))
				{
					ft_printf("Invalid input\n");
					free(param35);
					i = -1;
					break ;
				}
			}
		}
		m35(ft_atoi(param35));
		free(param35);
	}
}
