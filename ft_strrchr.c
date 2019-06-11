#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char *nptr;

	nptr = NULL;
	while (*s != '\0')
		s++;
	while (s)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	if (*s == c)
		return ((char *)s);
	return (nptr);
}
