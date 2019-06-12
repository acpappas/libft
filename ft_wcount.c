#include "libft.h"

int	ft_wcount(const char *str, char delim)
{
	int count;

	count = 0;
	while (*str)
	{
	while (*str == delim)
		str++;
	if (*str != delim)
	{
		count++;
		while (*str != delim && *str)
		str++;
	}
	}
	return (count);
}
