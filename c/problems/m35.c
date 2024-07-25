#include "../euler.h"

static unsigned int	series3(int max)
{
	int				m3;
	int				looper;
	unsigned int	result;

	if (!max || max <= 3)
		return (0);
	m3 = 2;
	looper = 3 * m3;
	result = 3;
	while (looper < max)
	{
		result += looper;
		m3++;
		looper = 3 * m3;
		while (looper % 5 == 0)
		{
			m3++;
			looper = 3 * m3;
		}
	}
	return (result);
}

static unsigned int	series5(int max)
{
	int				m5;
	int				looper;
	unsigned int	result;

	if (!max || max <= 5)
		return (0);
	m5 = 2;
	looper = 5 * m5;
	result = 5;
	while (looper < max)
	{
		result += looper;
		m5++;
		looper = 5 * m5;
	}
	return (result);
}

void	m35(int max)
{
	unsigned int	m3;
	unsigned int	m5;
	unsigned int	result;

	m3 = series3(max);
	m5 = series5(max);
	result = m3 + m5;
	ft_printf("The sum of all the multiples of 3 and 5 below %d is %d\n", max, result);
}