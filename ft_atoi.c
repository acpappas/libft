#include <string.h>

int	ft_sign(char nptr)
{
	if (nptr == '-' || nptr == '+')
		if(nptr == '-')
			return(-1);
		return(1);
}

int	ft_atoi(const char *nptr)
{
	int res;
	int i;
	int neg;

	i = 0;
	res = 0;
	neg = 1;

if (nptr[i] == '-' || nptr[i] == '+')
	{
		neg = ft_sign(*nptr);
		i++;
	}
while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		while (nptr[i] != '\0')
		{
			res *= 10;
			res = res + nptr[i] - '0';
			i++;
		}
		res *= neg;
		return (res);
	}
}
